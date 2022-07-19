//
// Created by Destiny on 2022/7/5.
//

#include "RemoveElements.h"

// 暴力解法：两层for循环，一个for循环遍历数组元素 ，第二个for循环更新数组。
// 时间复杂度：O(n^2) 空间复杂度：O(1)
int RemoveElements::removeElement_Violent(vector<int> &nums, int val) {
  int size = nums.size(); //获取数组的大小
  for (int i = 0; i < size; ++i) {
    if (nums[i] == val) { //发现需要移除的元素，将数组集体向前移动一位
      for (int j = i + 1; j < size; ++j) {
        nums[j - 1] = nums[j];
      }
      i--; //下标以后的数值都向前移动了一位，所以i也向前移动一位
      size--; //数组的大小-1
    }
  }
  return size;
}

// 双指针解法(快慢指针法):通过一个快指针和慢指针在一个for循环下完成两个for循环的工作。
// 时间复杂度：O(n) 空间复杂度：O(1)
int RemoveElements::removeElement_DoublePointer(vector<int> &nums, int val) {
  int slowIndex = 0;
  for (int fastIndex = 0; fastIndex < nums.size(); ++fastIndex) {
    if (nums[fastIndex] != val) {
      nums[slowIndex++] = nums[fastIndex];
    }
  }
  return slowIndex;
}

//相向双指针解法
int RemoveElements::removeElement_OppositeDoublePointer(vector<int> &nums,
                                                        int val) {
  int leftIndex = 0;
  int rightIndex = nums.size() - 1;
  while (leftIndex <= rightIndex) {
    //找左边等于val的元素
    while (nums[leftIndex] != val) {
      ++leftIndex;
    }
    //找右边不等于val的元素
    while (nums[rightIndex] == val) {
      --rightIndex;
    }
    //将右边不等于val的元素覆盖左边等于val的元素
    if (leftIndex < rightIndex) {
      nums[leftIndex++] = nums[rightIndex--];
    }
  }
  return leftIndex; // leftIndex指向最终数组末尾的下一个元素
}
