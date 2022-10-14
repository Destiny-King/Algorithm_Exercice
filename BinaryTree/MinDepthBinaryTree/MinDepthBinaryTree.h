//
// Created by Destiny on 2022/10/14.
//

#ifndef BINARYTREE_MINDEPTHBINARYTREE_H
#define BINARYTREE_MINDEPTHBINARYTREE_H

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

class MinDepthBinaryTree {
public:
  TreeNode *initBTree(vector<int> &nums, int size); //初始化二叉树

  int minDepth(TreeNode *root);

  int minDepth_Iteration(TreeNode *root);
};

#endif // BINARYTREE_MINDEPTHBINARYTREE_H
