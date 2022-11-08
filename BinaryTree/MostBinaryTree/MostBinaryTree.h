//
// Created by Destiny on 2022/11/8.
//

#ifndef BINARYTREE_MOSTBINARYTREE_H
#define BINARYTREE_MOSTBINARYTREE_H

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

class MostBinaryTree {
private:
  TreeNode *traversal(vector<int> &nums, int left, int right);

public:
  TreeNode *constructMaximumBinaryTree(vector<int> &nums);
};

#endif // BINARYTREE_MOSTBINARYTREE_H
