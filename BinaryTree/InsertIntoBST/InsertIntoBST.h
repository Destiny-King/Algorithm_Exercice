//
// Created by Destiny on 2022/12/3.
//

#ifndef BINARYTREE_INSERTINTOBST_H
#define BINARYTREE_INSERTINTOBST_H

#include <iostream>
using namespace std;
#include <queue>
#include <vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class InsertIntoBST {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  TreeNode *insertIntoBST(TreeNode *root, int val);
};

#endif // BINARYTREE_INSERTINTOBST_H
