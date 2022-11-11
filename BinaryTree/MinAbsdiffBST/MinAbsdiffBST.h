//
// Created by Destiny on 2022/11/11.
//

#ifndef BINARYTREE_MINABSDIFFBST_H
#define BINARYTREE_MINABSDIFFBST_H

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

class MinAbsdiffBST {
private:
  int result = INT_MAX;
  TreeNode *pre = NULL;
  void traversal(TreeNode *cur);

public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  int getMinDiff(TreeNode *root);
};

#endif // BINARYTREE_MINABSDIFFBST_H
