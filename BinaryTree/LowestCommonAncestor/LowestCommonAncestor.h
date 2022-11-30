//
// Created by Destiny on 2022/11/30.
//

#ifndef BINARYTREE_LOWESTCOMMONANCESTOR_H
#define BINARYTREE_LOWESTCOMMONANCESTOR_H

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

class LowestCommonAncestor {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q);
};

#endif // BINARYTREE_LOWESTCOMMONANCESTOR_H
