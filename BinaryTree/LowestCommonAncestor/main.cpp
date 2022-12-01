//
// Created by Destiny on 2022/11/30.
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

  vector<int> nums2 = {6, 2, 8, 0, 4, 7, 9, NULL, NULL, 3, 5};
  TreeNode *root2 = lowestCommonAncestor.createBTree(nums2, 0);
  TreeNode *left2 = root2->left;
  TreeNode *right2 = root2->right;
  TreeNode *ret2 =
      lowestCommonAncestor.lowestCommonAncestor_BST(root2, left2, right2);
  cout << ret2->val << endl;

  return 0;
}