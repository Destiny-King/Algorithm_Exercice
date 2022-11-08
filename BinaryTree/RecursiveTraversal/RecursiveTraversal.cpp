//
// Created by Destiny on 2022/9/30.
//

#include "RecursiveTraversal.h"

TreeNode *RecursiveTraversal::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

void RecursiveTraversal::traversal_Pre(TreeNode *cur, vector<int> &vec) {
  if (cur == NULL)
    return;
  vec.push_back(cur->val);        //中
  traversal_Pre(cur->left, vec);  //左
  traversal_Pre(cur->right, vec); //右
}

vector<int> RecursiveTraversal::preorderTravers(TreeNode *root) {
  vector<int> result;
  traversal_Pre(root, result);
  return result;
}

//中序遍历
void RecursiveTraversal::traversal_Center(TreeNode *cur, vector<int> &vec) {
  if (cur == NULL)
    return;
  traversal_Center(cur->left, vec);  //左
  vec.push_back(cur->val);           //中
  traversal_Center(cur->right, vec); //右
}

//数组遍历
vector<int> RecursiveTraversal::centerorderTravers(TreeNode *root) {
  vector<int> result;
  traversal_Center(root, result);
  return result;
}

//后序遍历
void RecursiveTraversal::traversal_Back(TreeNode *cur, vector<int> &vec) {
  if (cur == NULL)
    return;
  traversal_Back(cur->left, vec);  //左
  traversal_Back(cur->right, vec); //右
  vec.push_back(cur->val);         //中
}

//数组遍历
vector<int> RecursiveTraversal::backorderTravers(TreeNode *root) {
  vector<int> result;
  traversal_Back(root, result);
  return result;
}
