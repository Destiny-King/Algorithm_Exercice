//
// Created by Destiny on 2022/11/30.
//

#include "LowestCommonAncestor.h"

TreeNode *LowestCommonAncestor::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

TreeNode *LowestCommonAncestor::lowestCommonAncestor(TreeNode *root,
                                                     TreeNode *p, TreeNode *q) {
  if (root == q || root == p || root == NULL)
    return root;
  TreeNode *left = lowestCommonAncestor(root->left, p, q);
  TreeNode *right = lowestCommonAncestor(root->right, p, q);
  if (left != NULL && right != NULL)
    return root;
  if (left == NULL)
    return right;
  return left;
}

TreeNode *LowestCommonAncestor::lowestCommonAncestor_BST(TreeNode *root,
                                                         TreeNode *p,
                                                         TreeNode *q) {
  if (root->val > p->val && root->val > q->val) {
    return lowestCommonAncestor_BST(root->left, p, q);
  } else if (root->val < p->val && root->val < q->val) {
    return lowestCommonAncestor_BST(root->right, p, q);
  } else
    return root;
}
