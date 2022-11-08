//
// Created by Destiny on 2022/11/4.
//

#include "FindBottomLeftValue.h"

TreeNode *FindBottomLeftValue::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

void FindBottomLeftValue::traversal(TreeNode *root, int depth) {
  if (root->left == NULL && root->right == NULL) {
    if (depth > maxDepth) {
      maxDepth = depth;
      result = root->val;
    }
    return;
  }
  if (root->left) {
    traversal(root->left, depth + 1);
  }
  if (root->right) {
    traversal(root->right, depth + 1);
  }
  return;
}

//递归法
int FindBottomLeftValue::findBottomLeftValue(TreeNode *root) {
  traversal(root, 0);
  return result;
}

//迭代法
int FindBottomLeftValue::findBottomLeftValue_Iterative(TreeNode *root) {
  queue<TreeNode *> que;
  if (root != NULL)
    que.push(root);
  int result = 0;
  while (!que.empty()) {
    int size = que.size();
    for (int i = 0; i < size; ++i) {
      TreeNode *node = que.front();
      que.pop();
      if (i == 0)
        result = node->val;
      if (node->left)
        que.push(node->left);
      if (node->right)
        que.push(node->right);
    }
  }
  return result;
}
