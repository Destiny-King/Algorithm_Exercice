//
// Created by Destiny on 2022/10/8.
//

#ifndef BINARYTREE_SEQUENCETRAVERSAL_H
#define BINARYTREE_SEQUENCETRAVERSAL_H

#include <iostream>
using namespace std;
#include <queue>
#include <vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class SequenceTraversal {
public:
  TreeNode *initBTree(vector<int> &nums, int size); //初始化二叉树
  vector<vector<int>> levelOrder(TreeNode *root);
  void order(TreeNode *cur, vector<vector<int>> &result, int depth);
  vector<vector<int>> levelOrder_Recursive(TreeNode *root);
};

#endif // BINARYTREE_SEQUENCETRAVERSAL_H
