//
// Created by Destiny on 2022/11/9.
//

#ifndef BINARYTREE_BINARYSEARCHTREE_H
#define BINARYTREE_BINARYSEARCHTREE_H

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

class BinarySearchTree {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //创建二叉树
  TreeNode *searchBST(TreeNode *root, int val);
  TreeNode *searchBST_Interation(TreeNode *root, int val);
};

#endif // BINARYTREE_BINARYSEARCHTREE_H
