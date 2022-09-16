//
// Created by Destiny on 2022/9/16.
//

#include "QueuesToStacks.h"

QueuesToStacks::QueuesToStacks() {}

//将元素x推入堆栈
void QueuesToStacks::push(int x) { que.push(x); }

//移除堆栈顶部的元素并返回该元素
int QueuesToStacks::pop() {
  int size = que.size();
  size--;
  while (size--) { // 将队列头部的元素（除了最后一个元素外） 重新添加到队列尾部
    que.push(que.front());
    que.pop();
  }
  int result = que.front(); // 此时弹出的元素顺序就是栈的顺序了
  que.pop();
  return result;
}

//获取顶部元素
int QueuesToStacks::top() { return que.back(); }

//返回堆栈是否为空
bool QueuesToStacks::empty() { return que.empty(); }
