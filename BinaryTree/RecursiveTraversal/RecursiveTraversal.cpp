//
// Created by Destiny on 2022/9/30.
//

#include "RecursiveTraversal.h"

TreeNode *RecursiveTraversal::initBTree(vector<int> &nums, int size) {
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
