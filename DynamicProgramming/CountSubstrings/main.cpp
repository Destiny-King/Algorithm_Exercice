//
// Created by Destiny on 2023/2/4.
//
#include "CountSubstrings.h"

int main() {
	system("chcp 65001");

	CountSubstrings countSubstrings;
	string s = "cbbd";
	int ret = countSubstrings.countSubstrings(s);
	cout << ret << endl;

	int ret2 = countSubstrings.longestPalindromeSubseq(s);
	cout << ret2 << endl;

	return 0;
}