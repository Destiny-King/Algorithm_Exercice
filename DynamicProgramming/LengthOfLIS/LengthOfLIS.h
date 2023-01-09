//
// Created by Destiny on 2022/12/30.
//

#ifndef DYNAMICPROGRAMMING_LENGTHOFLIS_H
#define DYNAMICPROGRAMMING_LENGTHOFLIS_H

#include <iostream>
#include <vector>
using namespace std;

class LengthOfLIS {
public:
  int lengthOfLIS(vector<int> &nums);
  int findLengthOfLCIS(vector<int> &nums);
  int findLength(vector<int> &nums1, vector<int> &nums2);
  int longestCommonSubsequence(string text1, string text2);
};

#endif // DYNAMICPROGRAMMING_LENGTHOFLIS_H
