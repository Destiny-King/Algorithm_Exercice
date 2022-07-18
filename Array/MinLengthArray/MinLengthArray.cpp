//
// Created by Destiny on 2022/7/18.
//

#include "MinLengthArray.h"

//暴力解法：时间复杂度：O(n^2) 空间复杂度：O(1)
int MinLengthArray::minSubArrayLen(int s, vector<int> &nums) {
  int result = INT32_MAX;                 //最终的结果：宏
  int sum = 0;                            //子序列的数值之和
  int subLength = 0;                      //子序列的长度
  for (int i = 0; i < nums.size(); ++i) { //设置子序列的起点为i
    sum = 0;
    for (int j = i; j < nums.size(); ++j) { //设置子序列终止位置为j
      sum += nums[j];
      if (sum >= s) {          //子序列和超过了s，更新result
        subLength = j - i + 1; //取子序列的长度
        result = result < subLength ? result : subLength;
        break; //符合条件就break
      }
    }
  }
  return result == INT32_MAX ? 0 : result;
}

//滑动窗口：根据当前子序列和大小的情况，不断调节子序列的起始位置。
//时间复杂度：O(n) 空间复杂度：O(1)
int MinLengthArray::minSubArrayLen_SlideWindow(int s, vector<int> &nums) {
  int result = INT32_MAX;
  int sum = 0;       //滑动窗口数值之和
  int subLength = 0; //滑动窗口的长度
  int i = 0;         //滑动窗口起始位置
  for (int j = 0; j < nums.size(); ++j) {
    sum += nums[j];
    //每次更新i，并不断比较子序列是否符合条件
    while (sum >= s) {
      subLength = (j - i + 1); //取子序列的长度
      result = result < subLength ? result : subLength;
      sum -= nums[i++]; //不断变更i
    }
  }
  //如果result没有被赋值的话，就返回0，说明没有符合条件的子序列
  return result == INT32_MAX ? 0 : result;
}
