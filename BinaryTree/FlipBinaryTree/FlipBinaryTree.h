//
// Created by Destiny on 2022/10/9.
//

#ifndef BINARYTREE_FLIPBINARYTREE_H
#define BINARYTREE_FLIPBINARYTREE_H

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

class FlipBinaryTree {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  TreeNode *invertTree(TreeNode *root);                //递归法
  TreeNode *invertTree_depth(TreeNode *root);   //迭代法(深度优先遍历)
  TreeNode *invertTree_breadth(TreeNode *root); //层序遍历(广度优先遍历)
};

#endif // BINARYTREE_FLIPBINARYTREE_H
