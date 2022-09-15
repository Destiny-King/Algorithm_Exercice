//
// Created by Destiny on 2022/9/15.
//

#include "StacksToQueues.h"

//在这里初始化数据结构
StacksToQueues::StacksToQueues() {}

//将元素x推到队列的后面
void StacksToQueues::push(int x) {
  stIn.push(x); //入栈添加元素
}

//从队列前面移除元素并返回该元素
int StacksToQueues::pop() {
  //只有当stOut为空的时候，再从stIn里导入数据
  if (stOut.empty()) {
    //从stIn导入数据直到stIn为空
    while (!stIn.empty()) {
      stOut.push(stIn.top());
      stIn.pop();
    }
  }
  int result = stOut.top();
  stOut.pop();
  return result;
}

// 得到前面的元素
int StacksToQueues::peek() {
  int res = this->pop(); // 直接使用已有的pop函数
  stOut.push(res); // 因为pop函数弹出了元素res，所以再添加回去
  return res;
}

//返回队列是否为空
bool StacksToQueues::empty() {
  return stIn.empty() && stOut.empty(); //
}
