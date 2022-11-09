//
// Created by Destiny on 2022/11/9.
//
#include "BinarySearchTree.h"

int main() {
  system("chcp 65001");

  BinarySearchTree binarySearchTree;

  //递归法
  vector<int> nums = {4, 2, 7, 1, 3};
  TreeNode *root = binarySearchTree.createBTree(nums, 0);

  TreeNode *ret = binarySearchTree.searchBST(root, 2);
  cout << ret->val << endl;
  cout << ret->left->val << endl;
  cout << ret->right->val << endl;

  return 0;
}