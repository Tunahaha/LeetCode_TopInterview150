# 117. Populating Next Right Pointers in Each Node II
- Difficulty: Medium
- Language: C++
- Runtime: 7ms
- Faster than: 84.26% of submissions

#### Problem Description
Given a binary tree

```
struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
```

Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to `NULL`.
Initially, all next pointers are set to `NULL`.