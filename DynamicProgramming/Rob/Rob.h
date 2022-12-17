//
// Created by Destiny on 2022/12/14.
//

#ifndef DYNAMICPROGRAMMING_ROB_H
#define DYNAMICPROGRAMMING_ROB_H

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Rob {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  int rob(vector<int> &nums);
  int rob2(vector<int> &nums);
  int robRange(vector<int> &nums, int start, int end);
  int rob3(TreeNode *root);
  vector<int> robTree(TreeNode *cur);
};

#endif // DYNAMICPROGRAMMING_ROB_H
