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

TreeNode *SequenceTraversal::initBTree(vector<int> &nums, int size) {
  if (size < 1) {
    return NULL;
  }
  //动态申请size大小的指针数组
  TreeNode **nodes = new TreeNode *[size];
  //将int数据转换为TreeNode节点
  for (int i = 0; i < size; i++) {
    if (nums[i] == 0) {
      nodes[i] = NULL;
    } else {
      nodes[i] = new TreeNode(nums[i]);
    }
  }
  queue<TreeNode *> nodeQueue;
  nodeQueue.push(nodes[0]);

  TreeNode *node;
  int index = 1;
  while (index < size) {
    node = nodeQueue.front();
    nodeQueue.pop();
    nodeQueue.push(nodes[index++]);
    node->left = nodeQueue.back();
    nodeQueue.push(nodes[index++]);
    node->right = nodeQueue.back();
  }
  return nodes[0];
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
