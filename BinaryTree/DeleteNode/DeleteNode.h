//
// Created by Destiny on 2022/12/5.
//

#ifndef BINARYTREE_DELETENODE_H
#define BINARYTREE_DELETENODE_H

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

class DeleteNode {
public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  TreeNode *deleteNode(TreeNode *root, int key);
};

#endif // BINARYTREE_DELETENODE_H
