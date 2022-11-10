//
// Created by Destiny on 2022/11/10.
//

#ifndef BINARYTREE_VERIFYBST_H
#define BINARYTREE_VERIFYBST_H

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

class VerifyBST {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //创建二叉树
  bool isValidBST(TreeNode *root);
  bool isValidBST_Interation(TreeNode *root);

  TreeNode *pre = NULL;
};

#endif // BINARYTREE_VERIFYBST_H
