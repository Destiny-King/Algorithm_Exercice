#include "Binary.h"
#include "Binary2.h"

int main() {
  system("chcp 65001"); //设置系统控制栏编码格式位utf8

  // Binary
  vector<int> nums = {1, 4, 5, 7, 12, 34, 55};
  int target = 12;
  Binary binary;
  int result = binary.search(nums, target);

  cout << "Binary的下标为：" << result << endl;

  // Binary2
  vector<int> nums2 = {1, 4, 5, 7, 12, 34, 55};
  int target2 = 55;
  Binary2 binary2;
  int result2 = binary2.search(nums, target2);

  cout << "Banary2的下标为：" << result2 << endl;

  return 0;
}