class Solution {
public:
    long long maxprod = 0;  // Store max product
    const int MOD = 1e9 + 7;

    // Find total sum of the tree
    int findusm(TreeNode* root) {
        if (!root)
            return 0;
        return root->val + findusm(root->left) + findusm(root->right);
    }

    // Find product of sums of two trees formed by removing one edge
    int prod(TreeNode* root, int sum) {
        if (!root)
            return 0;
        int lefty = prod(root->left, sum);
        int righty = prod(root->right, sum);
        long long subtreesum = lefty + righty + root->val;
        long long complement = sum - subtreesum;
        long long prody = subtreesum * complement;
        maxprod = max(maxprod, prody);
        return subtreesum;
    }

    int maxProduct(TreeNode* root) {
        int sum = findusm(root);  // Get total sum
        prod(root, sum);          // Find max product
        return maxprod % MOD;     // Return result modulo 10^9+7
    }
};
