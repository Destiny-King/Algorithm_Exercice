//
// Created by Destiny on 2022/11/9.
//
#include "MergeBinaryTree.h"

int main() {
  system("chcp 65001");

  MergeBinaryTree mergeBinaryTree;

  //递归法
  vector<int> nums = {1, 3, 2, 5};
  vector<int> nums2 = {2, 1, 3, NULL, 4, NULL, 7};
  TreeNode *t1 = mergeBinaryTree.createBTree(nums, 0);
  TreeNode *t2 = mergeBinaryTree.createBTree(nums2, 0);

  TreeNode *ret = mergeBinaryTree.mergeTrees(t1, t2);
  cout << ret->val << endl;
  cout << ret->left->val << endl;
  cout << ret->right->val << endl;

  //  TreeNode *ret2 = mergeBinaryTree.mergeTrees_Iteration(t1, t2);

  return 0;
}