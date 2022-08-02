//
// Created by Destiny on 2022/7/5.
//
#include "DesignList.h"

int main() {
  system("chcp 65001");

  DesignList design;

  //在链表的最前面插入一个节点 在链表的最后面插入一个节点
  design.addAtHead(1);
  design.addAtTail(2);
  design.addAtTail(3);
  design.addAtTail(4);
  design.addAtTail(5);
  design.addAtTail(6);
  design.printLinkedList();

  //获取链表第index个节点的数值
  int a = design.get(5);
  cout << a << endl;

  //在链表第index个节点前面插入一个节点
  design.addAtIndex(6, 7);
  design.printLinkedList();

  //删除链表的第index个节点
  design.deleteAtIndex(6);
  design.printLinkedList();

  return 0;
}