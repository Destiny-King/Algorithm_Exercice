//
// Created by Destiny on 2022/10/17.
//

#ifndef BINARYTREE_BALANTBINARYTREE_H
#define BINARYTREE_BALANTBINARYTREE_H

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

class BalantBinaryTree {
public:
  TreeNode *initBTree(vector<int> &nums, int size); //初始化二叉树
  int getHeight(TreeNode *node);
  bool isBalanced(TreeNode *root);
};

#endif // BINARYTREE_BALANTBINARYTREE_H
