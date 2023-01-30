//
// Created by Destiny on 2022/10/26.
//
#include "MinDistance.h"

int main() {
	system("chcp 65001");

	MinDistance minDistance;

	string word1 = "sea";
	string word2 = "eat";
	int ret = minDistance.minDistance(word1, word2);
	cout << ret << endl;

	return 0;
}