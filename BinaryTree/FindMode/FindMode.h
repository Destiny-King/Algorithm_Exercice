//
// Created by Destiny on 2022/11/22.
//

#ifndef BINARYTREE_FINDMODE_H
#define BINARYTREE_FINDMODE_H

#include <iostream>
using namespace std;
#include <vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class FindMode {
public:
  FindMode();

private:
  int maxCount; //最大频率
  int count;    //统计频率
  TreeNode *pre;
  vector<int> result;
  void searchBST(TreeNode *cur);

public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  vector<int> findMode(TreeNode *root);
};

#endif // BINARYTREE_FINDMODE_H
