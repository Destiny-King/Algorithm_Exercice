//
// Created by Destiny on 2022/11/29.
//

#ifndef GREEDYALGORITHM_MINCAMERACOVER_H
#define GREEDYALGORITHM_MINCAMERACOVER_H

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class MinCameraCover {
private:
  int result;
  int traversal(TreeNode *cur);

public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  int minCameraCover(TreeNode *root);
};

#endif // GREEDYALGORITHM_MINCAMERACOVER_H
