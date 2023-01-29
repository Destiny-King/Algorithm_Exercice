//
// Created by Destiny on 2022/10/26.
//
#include "LengthOfLIS.h"

int main() {
	system("chcp 65001");

	LengthOfLIS lengthOfLis;

	vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
	int ret = lengthOfLis.lengthOfLIS(nums);
	cout << ret << endl;

	vector<int> nums2 = {1, 3, 5, 4, 7};
	int ret2 = lengthOfLis.findLengthOfLCIS(nums2);
	cout << ret2 << endl;

	vector<int> nums3 = {1, 2, 3, 2, 1};
	vector<int> nums4 = {3, 2, 1, 4, 7};
	int ret3 = lengthOfLis.findLength(nums3, nums4);
	cout << ret3 << endl;

	string text1 = "abcde";
	string text2 = "ace";
	int ret4 = lengthOfLis.longestCommonSubsequence(text1, text2);
	cout << ret4 << endl;

	vector<int> A = {2, 5, 1, 2, 5};
	vector<int> B = {10, 5, 2, 1, 5, 2};
	int ret5 = lengthOfLis.maxUncrossedLines(A, B);
	cout << ret5 << endl;

	vector<int> nums6 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int ret6 = lengthOfLis.maxSubArray(nums6);
	cout << ret6 << endl;

	string s = "abc";
	string t = "ahbgdc";
	bool ret7 = lengthOfLis.isSubsequence(s, t);
	cout << ret7 << endl;

	string s2 = "babgbag";
	string t2 = "bag";
	int ret8 = lengthOfLis.numDistinct(s2, t2);
	cout << ret8 << endl;

	return 0;
}