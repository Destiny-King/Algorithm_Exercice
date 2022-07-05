#include "Binary.h"

int main() {
  system("chcp 65001"); //设置系统控制栏编码格式位utf8

  vector<int> nums = {1, 4, 5, 7, 12, 34, 55};
  int target = 12;
  Binary binary;
  int result = binary.search_LeftClosed_RightClosed(nums, target);

  cout << "左闭右闭的下标为：" << result << endl;

  int result2 = binary.search_LeftClosed_RightOpened(nums, target);

  cout << "左闭右开的下标为：" << result2 << endl;

  return 0;
}