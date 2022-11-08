//
// Created by Destiny on 2022/10/8.
//

#include "SequenceTraversal.h"

vector<vector<int>> SequenceTraversal::levelOrder(TreeNode *root) {
  queue<TreeNode *> queue;
  if (root != NULL)
    queue.push(root);
  vector<vector<int>> result;
  while (!queue.empty()) {
    int size = queue.size();
    vector<int> vector;
    //使用固定大小size
    for (int i = 0; i < size; ++i) {
      TreeNode *node = queue.front();
      queue.pop();
      vector.push_back(node->val);
      if (node->left)
        queue.push(node->left);
      if (node->right)
        queue.push(node->right);
    }
    result.push_back(vector);
  }
  return result;
}

TreeNode *SequenceTraversal::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

//递归法
void SequenceTraversal::order(TreeNode *cur, vector<vector<int>> &result,
                              int depth) {
  if (cur == nullptr)
    return;
  if (result.size() == depth)
    result.push_back(vector<int>());
  result[depth].push_back(cur->val);
  order(cur->left, result, depth + 1);
  order(cur->right, result, depth + 1);
}

vector<vector<int>> SequenceTraversal::levelOrder_Recursive(TreeNode *root) {
  vector<vector<int>> result;
  int depth = 0;
  order(root, result, depth);
  return result;
}
