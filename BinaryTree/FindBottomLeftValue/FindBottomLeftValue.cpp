//
// Created by Destiny on 2022/11/4.
//

#include "FindBottomLeftValue.h"

TreeNode *FindBottomLeftValue::initBTree(vector<int> &nums, int size) {
  if (size < 1) {
    return NULL;
  }
  //动态申请size大小的指针数组
  TreeNode **nodes = new TreeNode *[size];
  //将int数据转换为TreeNode节点
  for (int i = 0; i < size; i++) {
    if (nums[i] == 0) {
      nodes[i] = NULL;
    } else {
      nodes[i] = new TreeNode(nums[i]);
    }
  }
  queue<TreeNode *> nodeQueue;
  nodeQueue.push(nodes[0]);

  TreeNode *node;
  int index = 1;
  while (index < size) {
    node = nodeQueue.front();
    nodeQueue.pop();
    nodeQueue.push(nodes[index++]);
    node->left = nodeQueue.back();
    nodeQueue.push(nodes[index++]);
    node->right = nodeQueue.back();
  }
  return nodes[0];
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
