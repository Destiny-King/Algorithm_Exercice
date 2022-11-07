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

TreeNode *ConstructBinaryTree::traversal_Pre(vector<int> &inorder,
                                             int inorderBegin, int inorderEnd,
                                             vector<int> &preorder,
                                             int preorderBegin,
                                             int preorderEnd) {
  if (preorderBegin == preorderEnd)
    return NULL;
  int rootValue = preorder[preorderBegin];
  TreeNode *root = new TreeNode(rootValue);
  //叶子节点
  if (preorderEnd - preorderBegin == 1)
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
  int leftPreorderBegin = preorderBegin + 1;
  int leftPreorderEnd = preorderBegin + 1 + delimiterIndex - inorderBegin;
  int rightPreorderBegin = preorderBegin + 1 + (delimiterIndex - inorderBegin);
  int rightPreorderEnd = preorderEnd;

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
  cout << "leftPreorder: ";
  for (int i = leftPreorderBegin; i < leftPreorderEnd; ++i) {
    cout << preorder[i] << " ";
  }
  cout << endl;
  cout << "rightPreorder: ";
  for (int i = rightPreorderBegin; i < rightPreorderEnd; ++i) {
    cout << preorder[i] << " ";
  }
  cout << endl;

  root->left = traversal_Pre(inorder, leftInorderBegin, leftInorderEnd,
                             preorder, leftPreorderBegin, leftPreorderEnd);
  root->right = traversal_Pre(inorder, rightInorderBegin, rightInorderEnd,
                              preorder, rightPreorderBegin, rightPreorderEnd);

  return root;
}

TreeNode *ConstructBinaryTree::buildTree_Pre(vector<int> &inorder,
                                             vector<int> &preorder) {
  if (inorder.size() == 0 || preorder.size() == 0)
    return NULL;
  return traversal_Pre(inorder, 0, inorder.size(), preorder, 0,
                       preorder.size());
}
