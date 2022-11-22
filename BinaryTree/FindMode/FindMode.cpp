//
// Created by Destiny on 2022/11/22.
//

#include "FindMode.h"

FindMode::FindMode() {
  count = 0;
  maxCount = 0;
  pre = NULL;
}

TreeNode *FindMode::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

vector<int> FindMode::findMode(TreeNode *root) {
  result.clear();
  searchBST(root);
  return result;
}

void FindMode::searchBST(TreeNode *cur) {
  if (cur == NULL)
    return;
  searchBST(cur->left);
  if (pre == NULL) {
    count = 1;
  } else if (pre->val == cur->val) {
    count++;
  } else {
    count = 1;
  }
  pre = cur;
  if (count == maxCount) {
    result.push_back(cur->val);
  }
  if (count > maxCount) {
    maxCount = count;
    result.clear();
    result.push_back(cur->val);
  }
  searchBST(cur->right);
  return;
}
