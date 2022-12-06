//
// Created by Destiny on 2022/12/6.
//

#ifndef BINARYTREE_CONVERTBST_H
#define BINARYTREE_CONVERTBST_H

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

class ConvertBST {
private:
  int pre;
  void traversal(TreeNode *cur);

public:
  ConvertBST();
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  TreeNode *convertBST(TreeNode *root);
};

#endif // BINARYTREE_CONVERTBST_H
