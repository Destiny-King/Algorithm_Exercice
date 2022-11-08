//
// Created by Destiny on 2022/10/18.
//

#ifndef BINARYTREE_SUMOFLEFTLEAVES_H
#define BINARYTREE_SUMOFLEFTLEAVES_H

#include <iostream>
using namespace std;
#include <queue>
#include <stack>
#include <vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class SumOfLeftLeaves {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  int sumOfLeftLeaves(TreeNode *root);
  int sumOfLeftLeaves_Interation(TreeNode *root);
};

#endif // BINARYTREE_SUMOFLEFTLEAVES_H
