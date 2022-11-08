//
// Created by Destiny on 2022/7/5.
//
#include "RecursiveTraversal.h"

int main() {
  system("chcp 65001");

  RecursiveTraversal recursiveTraversal;

  vector<int> nums = {1, 2, 3};
  TreeNode *root = recursiveTraversal.createBTree(nums, 0);

  //前序遍历
  vector<int> preResult;
  recursiveTraversal.traversal_Pre(root, preResult);
  vector<int> ret = recursiveTraversal.preorderTravers(root);
  cout << "前序遍历：" << endl;
  for (int i = 0; i < ret.size(); ++i) {
    cout << ret[i] << " ";
  }
  cout << endl;

  //中序遍历
  vector<int> centerResult;
  recursiveTraversal.traversal_Center(root, centerResult);
  vector<int> ret2 = recursiveTraversal.centerorderTravers(root);
  cout << "中序遍历：" << endl;
  for (int i = 0; i < ret2.size(); ++i) {
    cout << ret2[i] << " ";
  }
  cout << endl;

  //后序遍历
  vector<int> backResult;
  recursiveTraversal.traversal_Back(root, backResult);
  vector<int> ret3 = recursiveTraversal.backorderTravers(root);
  cout << "后序遍历：" << endl;
  for (int i = 0; i < ret3.size(); ++i) {
    cout << ret3[i] << " ";
  }
  cout << endl;

  return 0;
}