//
// Created by Destiny on 2022/12/14.
//

#include "Rob.h"

int Rob::rob(vector<int> &nums) {
  if (nums.size() == 0)
    return 0;
  if (nums.size() == 1)
    return nums[0];
  vector<int> dp(nums.size());
  dp[0] = nums[0];
  dp[1] = max(nums[0], nums[1]);
  for (int i = 2; i < nums.size(); ++i) {
    dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
  }
  return dp[nums.size() - 1];
}

int Rob::rob2(vector<int> &nums) {
  if (nums.size() == 0)
    return 0;
  if (nums.size() == 1)
    return nums[0];
  int result1 = robRange(nums, 0, nums.size() - 2);
  int result2 = robRange(nums, 1, nums.size() - 1);
  return max(result1, result2);
}

int Rob::robRange(vector<int> &nums, int start, int end) {
  if (end == start)
    return nums[start];
  vector<int> dp(nums.size());
  dp[start] = nums[start];
  dp[start + 1] = max(nums[start], nums[start + 1]);
  for (int i = start + 2; i <= end; ++i) {
    dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
  }
  return dp[end];
}

TreeNode *Rob::createBTree(vector<int> &nums, int index) {
  if (index > nums.size() - 1 || nums[index] == 0)
    return NULL;
  TreeNode *node = new TreeNode(nums[index]);
  node->left = createBTree(nums, 2 * index + 1);
  node->right = createBTree(nums, 2 * index + 2);
  return node;
}

vector<int> Rob::robTree(TreeNode *cur) {
  if (cur == NULL)
    return vector<int>{0, 0};
  vector<int> left = robTree(cur->left);
  vector<int> right = robTree(cur->right);
  int val1 = cur->val + left[0] + right[0];
  int val2 = max(left[0], left[1]) + max(right[0], right[1]);
  return {val2, val1};
}

int Rob::rob3(TreeNode *root) {
  vector<int> result = robTree(root);
  return max(result[0], result[1]);
}
