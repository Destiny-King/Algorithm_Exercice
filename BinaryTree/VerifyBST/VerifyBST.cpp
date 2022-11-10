//
// Created by Destiny on 2022/11/10.
//

#include "VerifyBST.h"

TreeNode *VerifyBST::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

bool VerifyBST::isValidBST(TreeNode *root) {
  if (root == NULL)
    return true;
  bool left = isValidBST(root->left);
  if (pre != NULL && pre->val >= root->val)
    return false;
  pre = root;
  bool right = isValidBST(root->right);
  return left && right;
}

//迭代法
bool VerifyBST::isValidBST_Interation(TreeNode *root) {
  stack<TreeNode *> st;
  TreeNode *cur = root;
  TreeNode *pre = NULL;
  while (cur != NULL || !st.empty()) {
    if (cur != NULL) {
      st.push(cur);
      cur = cur->left;
    } else {
      cur = st.top();
      st.pop();
      if (pre != NULL && cur->val <= pre->val)
        return false;
      pre = cur;
      cur = cur->right;
    }
  }
  return true;
}
