//
// Created by Destiny on 2022/11/8.
//

#include "MergeBinaryTree.h"

TreeNode *MergeBinaryTree::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

//递归法
TreeNode *MergeBinaryTree::mergeTrees(TreeNode *t1, TreeNode *t2) {
  if (t1 == NULL)
    return t2;
  if (t2 == NULL)
    return t1;
  TreeNode *root = new TreeNode(0);
  root->val = t1->val + t2->val;
  root->left = mergeTrees(t1->left, t2->left);
  root->right = mergeTrees(t1->right, t2->right);
  return root;
}

//迭代法
TreeNode *MergeBinaryTree::mergeTrees_Iteration(TreeNode *t1, TreeNode *t2) {
  if (t1 == NULL)
    return t2;
  if (t2 == NULL)
    return t1;
  queue<TreeNode *> que;
  que.push(t1);
  que.push(t2);
  while (!que.empty()) {
    TreeNode *node1 = que.front();
    que.pop();
    TreeNode *node2 = que.front();
    que.pop();

    node1->val += node2->val;
    if (node1->left != NULL && node2->left != NULL) {
      que.push(node1->left);
      que.push(node2->left);
    }
    if (node1->right != NULL && node2->right != NULL) {
      que.push(node1->right);
      que.push(node2->right);
    }
    if (node1->left == NULL && node2->left != NULL) {
      node1->left = node2->left;
    }
    if (node1->right == NULL && node2->right != NULL) {
      node1->right = node2->right;
    }
  }
  return t1;
}
