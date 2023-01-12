//
// Created by Destiny on 2022/12/30.
//

#include "LengthOfLIS.h"

int LengthOfLIS::lengthOfLIS(vector<int> &nums) {
	if (nums.size() <= 1)
		return nums.size();
	vector<int> dp(nums.size(), 1);
	int result = 0;
	for (int i = 1; i < nums.size(); ++i) {
		for (int j = 0; j < i; ++j) {
			if (nums[i] > nums[j])
				dp[i] = max(dp[i], dp[j] + 1);
			if (dp[i] > result)
				result = dp[i];
		}
	}
	return result;
}

int LengthOfLIS::findLengthOfLCIS(vector<int> &nums) {
	if (nums.size() == 0)
		return 0;
	vector<int> dp(nums.size(), 1);
	int result = 1;
	for (int i = 1; i < nums.size(); ++i) {
		if (nums[i] > nums[i - 1]) {
			dp[i] = dp[i - 1] + 1;
		}
		if (dp[i] > result)
			result = dp[i];
	}
	return result;
}

int LengthOfLIS::findLength(vector<int> &nums1, vector<int> &nums2) {
	vector<vector<int>> dp(nums1.size() + 1, vector<int>(nums2.size() + 1, 0));
	int result = 0;
	for (int i = 1; i <= nums1.size(); ++i) {
		for (int j = 1; j <= nums2.size(); ++j) {
			if (nums1[i - 1] == nums2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			if (dp[i][j] > result)
				result = dp[i][j];
		}
	}
	return result;
}

int LengthOfLIS::longestCommonSubsequence(string text1, string text2) {
	vector<vector<int>> dp(text1.size() + 1, vector<int>(text2.size() + 1, 0));
	for (int i = 1; i <= text1.size(); ++i) {
		for (int j = 1; j <= text2.size(); ++j) {
			if (text1[i - 1] == text2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			} else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	return dp[text1.size()][text2.size()];
}

int LengthOfLIS::maxUncrossedLines(vector<int> &A, vector<int> &B) {
	vector<vector<int>> dp(A.size() + 1, vector<int>(B.size() + 1, 0));
	for (int i = 1; i <= A.size(); ++i) {
		for (int j = 1; j <= B.size(); ++j) {
			if (A[i - 1] == B[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			} else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	return dp[A.size()][B.size()];
}

int LengthOfLIS::maxSubArray(vector<int> &nums) {
	if (nums.size() == 0) return 0;
	vector<int> dp(nums.size());
	dp[0] = nums[0];
	int result = dp[0];
	for (int i = 1; i < nums.size(); ++i) {
		dp[i] = max(dp[i - 1] + nums[i], nums[i]);
		if (dp[i] > result) result = dp[i];
	}
	return result;
}

bool LengthOfLIS::isSubsequence(string s, string t) {
	vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1, 0));
	for (int i = 1; i <= s.size(); ++i) {
		for (int j = 1; j <= t.size(); ++j) {
			if (s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = dp[i][j - 1];
		}
	}
	if (dp[s.size()][t.size()] == s.size()) return true;
	return false;
}
