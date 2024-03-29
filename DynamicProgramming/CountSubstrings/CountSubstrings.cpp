//
// Created by Destiny on 2023/2/4.
//

#include "CountSubstrings.h"

int CountSubstrings::countSubstrings(string s) {
	vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
	int result = 0;
	for (int i = s.size() - 1; i >= 0; i--) {
		for (int j = i; j < s.size(); ++j) {
			if (s[i] == s[j] && (j - i <= 1 || dp[i + 1][j - 1])) {
				result++;
				dp[i][j] = true;
			}
		}
	}
	return result;
}

int CountSubstrings::longestPalindromeSubseq(string s) {
	vector<vector<int>> dp(s.size(), vector<int>(s.size(), 0));
	for (int i = 0; i < s.size(); ++i) {
		dp[i][i] = 1;
	}
	for (int i = s.size() - 1; i >= 0; i--) {
		for (int j = i + 1; j < s.size(); ++j) {
			if (s[i] == s[j]) {
				dp[i][j] = dp[i + 1][j - 1] + 2;
			} else {
				dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
			}
		}
	}
	return dp[0][s.size() - 1];
}
