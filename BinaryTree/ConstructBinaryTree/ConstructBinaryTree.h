//
// Created by Destiny on 2022/11/7.
//

#ifndef BINARYTREE_CONSTRUCTBINARYTREE_H
#define BINARYTREE_CONSTRUCTBINARYTREE_H

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

class ConstructBinaryTree {
private:
  TreeNode *traversal(vector<int> &inorder, int inorderBegin, int inorderEnd,
                      vector<int> &postorder, int postorderBegin,
                      int postorderEnd);

public:
  TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder);
};

#endif // BINARYTREE_CONSTRUCTBINARYTREE_H
