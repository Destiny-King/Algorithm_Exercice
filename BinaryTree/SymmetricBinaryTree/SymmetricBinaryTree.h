//
// Created by Destiny on 2022/10/13.
//

#ifndef BINARYTREE_SYMMETRICBINARYTREE_H
#define BINARYTREE_SYMMETRICBINARYTREE_H

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

class SymmetricBinaryTree {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  bool compare(TreeNode *left, TreeNode *right);
  bool isSymmetric(TreeNode *root);
  bool isSymmetric_Queue(TreeNode *root);
  bool isSymmetric_Stack(TreeNode *root);
};

#endif // BINARYTREE_SYMMETRICBINARYTREE_H
