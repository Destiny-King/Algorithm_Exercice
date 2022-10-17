//
// Created by Destiny on 2022/10/17.
//

#include "AllPathBinaryTree.h"

TreeNode *AllPathBinaryTree::initBTree(vector<int> &nums, int size) {
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

void AllPathBinaryTree::traversal(TreeNode *cur, vector<int> &path,
                                  vector<string> &result) {
  path.push_back(cur->val);
  if (cur->left == NULL && cur->right == NULL) {
    string sPath;
    for (int i = 0; i < path.size() - 1; ++i) {
      sPath += to_string(path[i]);
      sPath += "->";
    }
    sPath += to_string(path[path.size() - 1]);
    result.push_back(sPath);
    return;
  }
  if (cur->left) { //左
    traversal(cur->left, path, result);
    path.pop_back(); //回溯
  }
  if (cur->right) { //右
    traversal(cur->right, path, result);
    path.pop_back(); //回溯
  }
}

vector<string> AllPathBinaryTree::binaryTreePaths(TreeNode *root) {
  vector<string> result;
  vector<int> path;
  if (root == NULL)
    return result;
  traversal(root, path, result);
  return result;
}

//迭代法
vector<string> AllPathBinaryTree::binaryTreePaths_Interation(TreeNode *root) {
  stack<TreeNode *> treeSt; //保存树的遍历节点
  stack<string> pathSt;     //保存遍历路径的节点
  vector<string> result;    //保存最终路径集合
  if (root == NULL)
    return result;
  treeSt.push(root);
  pathSt.push(to_string(root->val));
  while (!treeSt.empty()) {
    TreeNode *node = treeSt.top(); //取出节点 中
    treeSt.pop();
    string path = pathSt.top(); //取出该节点对应的路径
    pathSt.pop();
    if (node->left == NULL && node->right == NULL) { //遇到叶子节点
      result.push_back(path);
    }
    if (node->right) {
      treeSt.push(node->right);
      pathSt.push(path + "->" + to_string(node->right->val));
    }
    if (node->left) {
      treeSt.push(node->left);
      pathSt.push(path + "->" + to_string(node->left->val));
    }
  }
  return result;
}
