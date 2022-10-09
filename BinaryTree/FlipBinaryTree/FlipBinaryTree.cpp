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

TreeNode *FlipBinaryTree::initBTree(vector<int> &nums, int size) {
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
