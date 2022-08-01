//
// Created by Destiny on 2022/7/5.
//
#include "RemoveElements.h"

int main() {
  system("chcp 65001");

  //数据初始化
  LinkList head;
  int val = 4;

  //对象实例化
  RemoveElements elements;
  elements.initList(head); //初始化链表
  elements.showList(head); //显示链表

  elements.removeElements(head, val);
  elements.showList(head);

  elements.removeElements_virtualNode(head, val);
  elements.showList(head);

  return 0;
}