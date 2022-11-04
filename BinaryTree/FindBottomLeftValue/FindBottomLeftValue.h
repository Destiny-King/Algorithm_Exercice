//
// Created by Destiny on 2022/11/4.
//

#ifndef BINARYTREE_FINDBOTTOMLEFTVALUE_H
#define BINARYTREE_FINDBOTTOMLEFTVALUE_H

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

class FindBottomLeftValue {
public:
  int maxDepth = INT_MIN;
  int result;
  TreeNode *initBTree(vector<int> &nums, int size); //初始化二叉树
  void traversal(TreeNode *root, int depth);
  int findBottomLeftValue(TreeNode *root);
  int findBottomLeftValue_Iterative(TreeNode *root);
};

#endif // BINARYTREE_FINDBOTTOMLEFTVALUE_H
