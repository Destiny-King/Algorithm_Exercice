//
// Created by Destiny on 2022/10/8.
//

#include "IterationTraversal.h"

#include <algorithm>
#include <stack>

TreeNode *IterationTraversal::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
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
