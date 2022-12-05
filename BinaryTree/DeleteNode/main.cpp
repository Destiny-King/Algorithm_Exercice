//
// Created by Destiny on 2022/12/5.
//
#include "DeleteNode.h"

int main() {
  system("chcp 65001");

  DeleteNode deleteNode;

  vector<int> nums = {5, 3, 6, 2, 4, NULL, 7};
  TreeNode *root = deleteNode.createBTree(nums, 0);
  int key = 3;

  TreeNode *ret = deleteNode.deleteNode(root, key);
  cout << ret->val << endl;
  cout << ret->left->val << endl;
  cout << ret->right->val << endl;

  return 0;
}