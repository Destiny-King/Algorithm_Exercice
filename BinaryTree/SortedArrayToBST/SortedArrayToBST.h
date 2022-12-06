//
// Created by Destiny on 2022/12/6.
//

#ifndef BINARYTREE_SORTEDARRAYTOBST_H
#define BINARYTREE_SORTEDARRAYTOBST_H

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

class SortedArrayToBST {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  TreeNode *traversal(vector<int> &nums, int left, int right);
  TreeNode *sortedArrayToBST(vector<int> &nums);
};

#endif // BINARYTREE_SORTEDARRAYTOBST_H
