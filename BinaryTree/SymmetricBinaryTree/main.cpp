//
// Created by Destiny on 2022/7/5.
//
#include "SymmetricBinaryTree.h"

int main() {
  system("chcp 65001");

  SymmetricBinaryTree symmetricBinaryTree;

  vector<int> nums = {1, 2, 2, 3, 4, 4, 3};
  TreeNode *root = symmetricBinaryTree.initBTree(nums, nums.size());

  bool b = symmetricBinaryTree.isSymmetric(root);
  if (b == 0) {
    cout << "错" << endl;
  } else if (b == 1) {
    cout << "对" << endl;
  }

  bool b2 = symmetricBinaryTree.isSymmetric_Queue(root);
  if (b2 == 0) {
    cout << "错" << endl;
  } else if (b2 == 1) {
    cout << "对" << endl;
  }

  bool b3 = symmetricBinaryTree.isSymmetric_Stack(root);
  if (b3 == 0) {
    cout << "错" << endl;
  } else if (b3 == 1) {
    cout << "对" << endl;
  }

  return 0;
}