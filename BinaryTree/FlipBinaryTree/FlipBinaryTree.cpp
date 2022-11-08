//
// Created by Destiny on 2022/10/9.
//

#include "FlipBinaryTree.h"

//递归法
TreeNode *FlipBinaryTree::invertTree(TreeNode *root) {
  if (root == NULL)
    return root;
  swap(root->left, root->right); //中
  invertTree(root->left);        //左
  invertTree(root->right);       //右
  return root;
}

TreeNode *FlipBinaryTree::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

//深度优先遍历
TreeNode *FlipBinaryTree::invertTree_depth(TreeNode *root) {
  if (root == NULL)
    return root;
  stack<TreeNode *> st;
  st.push(root);
  while (!st.empty()) {
    TreeNode *node = st.top(); //中
    st.pop();
    swap(node->left, node->right);
    if (node->right)
      st.push(node->right); //右
    if (node->left)
      st.push(node->left); //左
  }
  return root;
}

//广度优先遍历
TreeNode *FlipBinaryTree::invertTree_breadth(TreeNode *root) {
  queue<TreeNode *> que;
  if (root != NULL)
    que.push(root);
  while (!que.empty()) {
    int size = que.size();
    for (int i = 0; i < size; ++i) {
      TreeNode *node = que.front();
      que.pop();
      swap(node->left, node->right);
      if (node->left)
        que.push(node->left);
      if (node->right)
        que.push(node->right);
    }
  }
  return root;
}
