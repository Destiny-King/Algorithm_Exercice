//
// Created by Destiny on 2022/8/22.
//

#include "ArrayIntersection.h"

//哈希表
vector<int> ArrayIntersection::intersection(vector<int> &nums1,
                                            vector<int> &nums2) {
  unordered_set<int> result_set; //存放结果
  unordered_set<int> nums_set(nums1.begin(), nums1.end());
  for (int num : nums2) {
    //发现nums2的元素，在nums_set里又出现过
    if (nums_set.find(num) != nums_set.end()) {
      result_set.insert(num);
    }
  }
  return vector<int>(result_set.begin(), result_set.end());
}

//遍历数组
void ArrayIntersection::traverseArray(vector<int> &num) {
  for (int i = 0; i < num.size(); ++i) {
    cout << num[i] << " ";
  }
  cout << endl;
}
