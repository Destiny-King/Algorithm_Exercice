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

	string word3 = "horse";
	string word4 = "ros";
	int ret2 = minDistance.minDistance2(word3, word4);
	cout << ret2 << endl;

	return 0;
}