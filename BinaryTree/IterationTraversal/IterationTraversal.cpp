//
// Created by Destiny on 2022/10/8.
//

#include "IterationTraversal.h"

#include <algorithm>
#include <stack>

TreeNode *IterationTraversal::initBTree(vector<int> &nums, int size) {
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

//前序遍历
vector<int> IterationTraversal::preorderTraversal(TreeNode *root) {
  stack<TreeNode *> st;
  vector<int> result;
  if (root == NULL)
    return result;
  st.push(root);
  while (!st.empty()) {
    TreeNode *node = st.top(); //中
    st.pop();
    result.push_back(node->val);
    if (node->right)
      st.push(node->right); //右
    if (node->left)
      st.push(node->left); //左
  }
  return result;
}

//中序遍历
vector<int> IterationTraversal::inorderTraversal(TreeNode *root) {
  vector<int> result;
  stack<TreeNode *> st;
  TreeNode *cur = root;
  while (cur != NULL || !st.empty()) {
    if (cur != NULL) { //指针来访问节点，访问到最底层
      st.push(cur);
      cur = cur->left; //左
    } else {
      cur = st.top(); //从栈里弹出的数据
      st.pop();
      result.push_back(cur->val); //中
      cur = cur->right;           //右
    }
  }
  return result;
}

//后序遍历
vector<int> IterationTraversal::postorderTraversal(TreeNode *root) {
  stack<TreeNode *> st;
  vector<int> result;
  if (root == NULL)
    return result;
  st.push(root);
  while (!st.empty()) {
    TreeNode *node = st.top();
    st.pop();
    result.push_back(node->val);
    if (node->left)
      st.push(node->left);
    if (node->right)
      st.push(node->right);
  }
  reverse(result.begin(), result.end()); //结果反转
  return result;
}
