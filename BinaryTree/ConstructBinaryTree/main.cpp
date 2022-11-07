//
// Created by Destiny on 2022/11/7.
//
#include "ConstructBinaryTree.h"

int main() {
  system("chcp 65001");

  ConstructBinaryTree constructBinaryTree;

  //递归法
  vector<int> inorder = {9, 3, 15, 20, 7};
  vector<int> postorder = {9, 15, 7, 20, 3};
  TreeNode *ret = constructBinaryTree.buildTree(inorder, postorder);
  cout << ret->val << endl;

  return 0;
}