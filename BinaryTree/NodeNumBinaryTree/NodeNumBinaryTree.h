//
// Created by Destiny on 2022/10/15.
//

#ifndef BINARYTREE_NODENUMBINARYTREE_H
#define BINARYTREE_NODENUMBINARYTREE_H
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

class NodeNumBinaryTree {
public:
  TreeNode *initBTree(vector<int> &nums, int size); //初始化二叉树
  int countNode(TreeNode *root);
  int countNode_Iteration(TreeNode *root);
  int countNodes(TreeNode *root); //完全二叉树递归
};

#endif // BINARYTREE_NODENUMBINARYTREE_H
