# Lowest Common Ancestor (LCA) in Binary Search Tree

## Algorithm Overview

The Lowest Common Ancestor (LCA) of two nodes in a BST is the deepest node that is an ancestor of both nodes.

## How It Works

The algorithm uses the BST property: for any node N, all nodes in the left subtree are smaller than N, and all nodes in the right subtree are larger than N.

### Algorithm Steps:
1. Start from root
2. If both nodes are smaller than current node → go left
3. If both nodes are larger than current node → go right  
4. Otherwise, current node is the LCA

## Visual Example

```
        20
       /  \
      10   30
     / \   / \
    5  15 25 35
   /     \
  3      18
```

### Case 1: LCA of nodes 5 and 15
```
Start at 20: 5 < 20, 15 < 20 → go left
At 10: 5 < 10, 15 > 10 → split point!
LCA = 10
```

### Case 2: LCA of nodes 3 and 18
```
Start at 20: 3 < 20, 18 < 20 → go left
At 10: 3 < 10, 18 > 10 → split point!
LCA = 10
```

### Case 3: LCA of nodes 25 and 35
```
Start at 20: 25 > 20, 35 > 20 → go right
At 30: 25 < 30, 35 > 30 → split point!
LCA = 30
```

## Code Logic

```cpp
if(n == nullptr)
    return nullptr;  // Base case: reached end of tree

if(*(p) > n->data && *(q) > n->data)
    return recursive(n->right,p,q);  // Both nodes in right subtree

else if(*(p) < n->data && *(q) < n->data)
    return recursive(n->left,p,q);   // Both nodes in left subtree

return n;  // Split point found - this is the LCA
```

## Time Complexity
- **Best Case**: O(log n) - balanced tree
- **Worst Case**: O(n) - skewed tree
- **Space Complexity**: O(log n) - recursion stack

## Key Insight
The LCA is found at the first node where the two target nodes "split" - one goes to the left subtree and one goes to the right subtree (or one of them is the current node itself).
