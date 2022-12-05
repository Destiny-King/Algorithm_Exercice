//
// Created by Destiny on 2022/12/5.
//

#ifndef BINARYTREE_TRIMBST_H
#define BINARYTREE_TRIMBST_H

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

class TrimBST {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //创建二叉树
  TreeNode *trimBST(TreeNode *root, int low, int high);
};

#endif // BINARYTREE_TRIMBST_H
