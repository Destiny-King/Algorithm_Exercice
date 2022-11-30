//
// Created by Destiny on 2022/7/5.
//
#include "LowestCommonAncestor.h"

int main() {
  system("chcp 65001");

  LowestCommonAncestor lowestCommonAncestor;

  vector<int> nums = {3, 5, 1, 6, 2, 0, 8, NULL, NULL, 7, 4};
  TreeNode *root = lowestCommonAncestor.createBTree(nums, 0);
  TreeNode *left = root->left;
  TreeNode *right = root->right;
  TreeNode *ret = lowestCommonAncestor.lowestCommonAncestor(root, left, right);
  cout << ret->val << endl;

  return 0;
}