//
// Created by Destiny on 2022/10/8.
//

#ifndef BINARYTREE_ITERATIONTRAVERSAL_H
#define BINARYTREE_ITERATIONTRAVERSAL_H

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

class IterationTraversal {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树

  vector<int> preorderTraversal(TreeNode *root); //前序遍历

  vector<int> inorderTraversal(TreeNode *root); //中序遍历

  vector<int> postorderTraversal(TreeNode *root); //后序遍历
};

#endif // BINARYTREE_ITERATIONTRAVERSAL_H
