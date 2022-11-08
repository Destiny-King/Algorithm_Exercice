//
// Created by Destiny on 2022/10/17.
//

#ifndef BINARYTREE_ALLPATHBINARYTREE_H
#define BINARYTREE_ALLPATHBINARYTREE_H

#include <iostream>
using namespace std;
#include <vector>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class AllPathBinaryTree {
private:
  void traversal(TreeNode *cur, vector<int> &path, vector<string> &result);

public:
  TreeNode *createBTree(vector<int> &nums, int index); //初始化二叉树
  vector<string> binaryTreePaths(TreeNode *root);
  vector<string> binaryTreePaths_Interation(TreeNode *root);
};

#endif // BINARYTREE_ALLPATHBINARYTREE_H
