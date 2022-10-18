//
// Created by Destiny on 2022/10/18.
//

#include "SumOfLeftLeaves.h"

TreeNode *SumOfLeftLeaves::initBTree(vector<int> &nums, int size) {
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

//递归法
int SumOfLeftLeaves::sumOfLeftLeaves(TreeNode *root) {
  if (root == NULL)
    return 0;
  if (root->left == NULL && root->right == NULL)
    return 0;

  int leftValue = sumOfLeftLeaves(root->left);
  if (root->left && !root->left->left && !root->left->right) {
    leftValue = root->left->val;
  }
  int rightValue = sumOfLeftLeaves(root->right);

  int sum = leftValue + rightValue;
  return sum;
}

//迭代法
int SumOfLeftLeaves::sumOfLeftLeaves_Interation(TreeNode *root) {
  stack<TreeNode *> st;
  if (root == NULL)
    return 0;
  st.push(root);
  int result = 0;
  while (!st.empty()) {
    TreeNode *node = st.top();
    st.pop();
    if (node->left != NULL && node->left->left == NULL &&
        node->left->right == NULL) {
      result += node->left->val;
    }

    if (node->right)
      st.push(node->right);
    if (node->left)
      st.push(node->left);
  }
  return result;
}
