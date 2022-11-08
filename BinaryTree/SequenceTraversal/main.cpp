//
// Created by Destiny on 2022/7/5.
//
#include "SequenceTraversal.h"

int main() {
  system("chcp 65001");

  SequenceTraversal sequenceTraversal;

  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  TreeNode *root = sequenceTraversal.createBTree(nums, 0);

  //层序遍历
  vector<vector<int>> ret = sequenceTraversal.levelOrder(root);
  cout << "层序遍历：" << endl;
  for (int i = 0; i < ret.size(); ++i) {
    for (int j = 0; j < ret[i].size(); ++j) {
      cout << ret[i][j] << " ";
    }
    cout << endl;
  }

  //递归法
  vector<vector<int>> ret2 = sequenceTraversal.levelOrder_Recursive(root);
  cout << "层序遍历(递归法)：" << endl;
  for (int i = 0; i < ret2.size(); ++i) {
    for (int j = 0; j < ret2[i].size(); ++j) {
      cout << ret2[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}