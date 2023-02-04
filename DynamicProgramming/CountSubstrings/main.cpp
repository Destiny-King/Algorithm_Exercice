//
// Created by Destiny on 2023/2/4.
//
#include "CountSubstrings.h"

int main() {
	system("chcp 65001");

	CountSubstrings countSubstrings;
	string s = "aaa";
	int ret = countSubstrings.countSubstrings(s);
	cout << ret << endl;

	return 0;
}