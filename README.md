# Leetcode-1339.-Maximum-Product-of-Splitted-Binary-Tree

# 🌳 Maximum Product of Splitted Binary Tree 🚀

Given the `root` of a binary tree, the goal is to **remove exactly one edge** such that the product of the sums of the resulting two subtrees is **maximized**. Then, return the **maximum product** *modulo* 10⁹ + 7.

---

## 💡 Intuition

To solve this problem:
1. First, calculate the **total sum** of all nodes in the tree.
2. Then, perform another traversal to calculate the **sum of each subtree**, and determine the **maximum product** by multiplying:
   - the current subtree sum, and
   - the remaining part of the tree (total sum - subtree sum).

This way, we find the **optimal split** to maximize the product.

---

## 🧠 Algorithm Steps

🔹 Step 1: Calculate total sum of the tree using DFS.  
🔹 Step 2: Traverse the tree again to compute:
   - the sum of each subtree
   - the product of the subtree and the rest of the tree
   - track the maximum product

🔹 Step 3: Return the max product modulo **10⁹ + 7**

---

## 🧪 Example

```cpp
    1
   / \
  2   3


- Total sum = 6  
- Possible splits:
  - [2] and [1,3] → 2×4 = 8
  - [3] and [1,2] → 3×3 = 9 ✅

**Answer: 9**
```
---

## ⏱️ Time Complexity
-

- **O(N)** – where `N` is the number of nodes in the tree.
- 
  - One DFS for total sum.
  - 
  - Another DFS to evaluate each possible split.

---

## 📦 Space Complexity
-

- **O(H)** – where `H` is the height of the tree (due to recursion stack).  
  - Worst case: O(N) for skewed trees.  
  - Best case: O(log N) for balanced trees.

---

## ✍️ Author
-

Made with 💻 by **Ridham Garg**  
🎓 B.Tech Computer Engineering  
🏫 Thapar University, Patiala  
🆔 Roll No: 102203014

---

## 🌟 Fun Fact

This problem is a great exercise in:
- **Tree traversal**
- **Postorder recursion**
- **Optimization via complementing subtrees**

🚀 Keep coding and exploring!
