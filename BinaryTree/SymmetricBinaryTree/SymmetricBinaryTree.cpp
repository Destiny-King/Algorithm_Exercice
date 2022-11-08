//
// Created by Destiny on 2022/10/13.
//

#include "SymmetricBinaryTree.h"

TreeNode *SymmetricBinaryTree::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

bool SymmetricBinaryTree::compare(TreeNode *left, TreeNode *right) {
  //首先排除空节点的情况
  if (left == NULL && right != NULL)
    return false;
  else if (left != NULL && right == NULL)
    return false;
  else if (left == NULL && right == NULL)
    return true;
  else if (left->val != right->val)
    return false;

  bool outside = compare(left->left, right->right);
  bool inside = compare(left->right, right->left);
  bool isSame = outside && inside;
  return isSame;
}

bool SymmetricBinaryTree::isSymmetric(TreeNode *root) {
  if (root == NULL)
    return true;
  return compare(root->left, root->right);
}

//迭代法(队列)
bool SymmetricBinaryTree::isSymmetric_Queue(TreeNode *root) {
  if (root == NULL)
    return true;
  queue<TreeNode *> que;
  que.push(root->left);  //将左子树头结点加入队列
  que.push(root->right); //将左子树头结点加入队列

  while (!que.empty()) {
    TreeNode *leftNode = que.front();
    que.pop();
    TreeNode *rightNode = que.front();
    que.pop();
    if (!leftNode && !rightNode) {
      continue;
    }
    if (!leftNode || !rightNode || (leftNode->val != rightNode->val)) {
      return false;
    }
    que.push(leftNode->left);
    que.push(rightNode->right);
    que.push(leftNode->right);
    que.push(rightNode->left);
  }
  return true;
}

//迭代法(栈)
bool SymmetricBinaryTree::isSymmetric_Stack(TreeNode *root) {
  if (root == NULL)
    return true;
  stack<TreeNode *> st;
  st.push(root->left);
  st.push(root->right);
  while (!st.empty()) {
    TreeNode *leftNode = st.top();
    st.pop();
    TreeNode *rightNode = st.top();
    st.pop();
    if (!leftNode && !rightNode) {
      continue;
    }
    if (!leftNode || !rightNode || (leftNode->val != rightNode->val)) {
      return false;
    }
    st.push(leftNode->left);
    st.push(rightNode->right);
    st.push(leftNode->right);
    st.push(rightNode->left);
  }
  return true;
}
