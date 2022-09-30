//
// Created by Destiny on 2022/9/30.
//

#ifndef STRING_RECURSIVETRAVERSAL_H
#define STRING_RECURSIVETRAVERSAL_H

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

class RecursiveTraversal {
public:
  TreeNode *initBTree(vector<int> &nums, int size); //初始化二叉树

  void traversal_Pre(TreeNode *cur, vector<int> &vec); //前序遍历

  vector<int> preorderTravers(TreeNode *root); //数组遍历

  void traversal_Center(TreeNode *cur, vector<int> &vec); //中序遍历

  vector<int> centerorderTravers(TreeNode *root); //数组遍历

  void traversal_Back(TreeNode *cur, vector<int> &vec); //后序遍历

  vector<int> backorderTravers(TreeNode *root); //数组遍历
};

#endif // STRING_RECURSIVETRAVERSAL_H
