//
// Created by Destiny on 2022/10/14.
//

#ifndef BINARYTREE_MAXDEPTHBINARYTREE_H
#define BINARYTREE_MAXDEPTHBINARYTREE_H

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

class MaxDepthBinaryTree {
public:
  TreeNode *initBTree(vector<int> &nums, int size); //初始化二叉树

  TreeNode *initNTree();

  int maxdepth(TreeNode *root);

  int maxdepth_Iteration(TreeNode *root);
};

#endif // BINARYTREE_MAXDEPTHBINARYTREE_H
