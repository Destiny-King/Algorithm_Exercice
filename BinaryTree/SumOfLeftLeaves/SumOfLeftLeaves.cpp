//
// Created by Destiny on 2022/10/18.
//

#include "SumOfLeftLeaves.h"

TreeNode *SumOfLeftLeaves::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
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
