//
// Created by Destiny on 2022/7/5.
//
#include "FlipBinaryTree.h"

int main() {
  system("chcp 65001");

  FlipBinaryTree flipBinaryTree;

  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  TreeNode *root = flipBinaryTree.initBTree(nums, nums.size());
  cout << "头节点: " << root->val << endl;

  //递归法
  TreeNode *node = flipBinaryTree.invertTree(root);
  cout << "递归法：" << endl;
  cout << node->val << endl;
  cout << node->left->val << node->right->val << endl;
  cout << node->left->left->val << node->left->right->val
       << node->right->left->val << node->right->right->val << endl;

  vector<int> nums2 = {1, 2, 3, 4, 5, 6, 7};
  TreeNode *root2 = flipBinaryTree.initBTree(nums2, nums2.size());
  cout << "头节点: " << root2->val << endl;
  //深度优先遍历
  TreeNode *node2 = flipBinaryTree.invertTree_depth(root2);
  cout << "深度优先遍历：" << endl;
  cout << node2->val << endl;
  cout << node2->left->val << node2->right->val << endl;
  cout << node2->left->left->val << node2->left->right->val
       << node2->right->left->val << node2->right->right->val << endl;

  vector<int> nums3 = {1, 2, 3, 4, 5, 6, 7};
  TreeNode *root3 = flipBinaryTree.initBTree(nums3, nums3.size());
  cout << "头节点: " << root3->val << endl;
  //广度优先遍历
  TreeNode *node3 = flipBinaryTree.invertTree_breadth(root3);
  cout << "广度优先遍历：" << endl;
  cout << node3->val << endl;
  cout << node3->left->val << node3->right->val << endl;
  cout << node3->left->left->val << node3->left->right->val
       << node3->right->left->val << node3->right->right->val << endl;

  return 0;
}