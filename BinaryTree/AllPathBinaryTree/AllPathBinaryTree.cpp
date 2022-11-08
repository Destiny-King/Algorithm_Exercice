//
// Created by Destiny on 2022/10/17.
//

#include "AllPathBinaryTree.h"
#include <stack>

TreeNode *AllPathBinaryTree::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
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
