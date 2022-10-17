//
// Created by Destiny on 2022/7/5.
//
#include "AllPathBinaryTree.h"

int main() {
  system("chcp 65001");

  AllPathBinaryTree allPathBinaryTree;

  vector<int> nums = {1, 2, 3, NULL, 5};
  TreeNode *root = allPathBinaryTree.initBTree(nums, nums.size());
  cout << "头节点: " << root->val << endl;

  //递归法
  cout << "递归法" << endl;
  vector<string> ret = allPathBinaryTree.binaryTreePaths(root);
  for (int i = 0; i < ret.size(); ++i) {
    cout << ret[i] << endl;
  }

  //迭代法
  cout << "迭代法" << endl;
  vector<string> ret2 = allPathBinaryTree.binaryTreePaths_Interation(root);
  for (int i = 0; i < ret2.size(); ++i) {
    cout << ret2[i] << endl;
  }

  return 0;
}