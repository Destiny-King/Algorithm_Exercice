//
// Created by Destiny on 2022/7/5.
//
#include "IterationTraversal.h"

int main() {
  system("chcp 65001");

  IterationTraversal iterationTraversal;

  vector<int> nums = {1, 2, 3};
  TreeNode *root = iterationTraversal.initBTree(nums, nums.size());
  cout << "头节点: " << root->val << endl;

  //前序遍历
  vector<int> ret = iterationTraversal.preorderTraversal(root);
  cout << "前序遍历：" << endl;
  for (int i = 0; i < ret.size(); ++i) {
    cout << ret[i] << " ";
  }
  cout << endl;

  //中序遍历
  vector<int> centerResult;
  vector<int> ret2 = iterationTraversal.inorderTraversal(root);
  cout << "中序遍历：" << endl;
  for (int i = 0; i < ret2.size(); ++i) {
    cout << ret2[i] << " ";
  }
  cout << endl;

  //后序遍历
  vector<int> backResult;
  vector<int> ret3 = iterationTraversal.postorderTraversal(root);
  cout << "后序遍历：" << endl;
  for (int i = 0; i < ret3.size(); ++i) {
    cout << ret3[i] << " ";
  }
  cout << endl;

  return 0;
}