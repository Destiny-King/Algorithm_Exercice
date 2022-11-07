//
// Created by Destiny on 2022/11/7.
//

#include "ConstructBinaryTree.h"

TreeNode *ConstructBinaryTree::buildTree(vector<int> &inorder,
                                         vector<int> &postorder) {
  if (inorder.size() == 0 || postorder.size() == 0)
    return NULL;
  return traversal(inorder, 0, inorder.size(), postorder, 0, postorder.size());
}

TreeNode *ConstructBinaryTree::traversal(vector<int> &inorder, int inorderBegin,
                                         int inorderEnd, vector<int> &postorder,
                                         int postorderBegin, int postorderEnd) {
  if (postorderBegin == postorderEnd)
    return NULL;
  int rootValue = postorder[postorderEnd - 1];
  TreeNode *root = new TreeNode(rootValue);
  //叶子节点
  if (postorderEnd - postorderBegin == 1)
    return root;
  //找到中序遍历的切割点
  int delimiterIndex;
  for (delimiterIndex = inorderBegin; delimiterIndex < inorderEnd;
       ++delimiterIndex) {
    if (inorder[delimiterIndex] == rootValue)
      break;
  }
  //切割中序数组
  int leftInorderBegin = inorderBegin;
  int leftInorderEnd = delimiterIndex;
  int rightInorderBegin = delimiterIndex + 1;
  int rightInorderEnd = inorderEnd;
  //切割后序数组
  int leftPostorderBegin = postorderBegin;
  int leftPostorderEnd = postorderBegin + delimiterIndex - inorderBegin;
  int rightPostorderBegin = postorderBegin + (delimiterIndex - inorderBegin);
  int rightPostorderEnd = postorderEnd - 1;

  //日志
  cout << "------" << endl;
  cout << "leftInorder: ";
  for (int i = leftInorderBegin; i < leftInorderEnd; ++i) {
    cout << inorder[i] << " ";
  }
  cout << endl;
  cout << "rightInorder: ";
  for (int i = rightInorderBegin; i < rightInorderEnd; ++i) {
    cout << inorder[i] << " ";
  }
  cout << endl;
  cout << "leftPostorder: ";
  for (int i = leftPostorderBegin; i < leftPostorderEnd; ++i) {
    cout << postorder[i] << " ";
  }
  cout << endl;
  cout << "rightPostorder: ";
  for (int i = rightPostorderBegin; i < rightPostorderEnd; ++i) {
    cout << postorder[i] << " ";
  }
  cout << endl;

  root->left = traversal(inorder, leftInorderBegin, leftInorderEnd, postorder,
                         leftPostorderBegin, leftPostorderEnd);
  root->right = traversal(inorder, rightInorderBegin, rightInorderEnd,
                          postorder, rightPostorderBegin, rightPostorderEnd);

  return root;
}
