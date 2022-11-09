//
// Created by Destiny on 2022/11/8.
//

#ifndef BINARYTREE_MERGEBINARYTREE_H
#define BINARYTREE_MERGEBINARYTREE_H

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

class MergeBinaryTree {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //创建二叉树
  TreeNode *mergeTrees(TreeNode *t1, TreeNode *t2);
  TreeNode *mergeTrees_Iteration(TreeNode *t1, TreeNode *t2);
};

#endif // BINARYTREE_MERGEBINARYTREE_H
