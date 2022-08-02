//
// Created by Destiny on 2022/8/2.
//

#ifndef ARRAY_DESIGNLIST_H
#define ARRAY_DESIGNLIST_H

#include <iostream>
using namespace std;
#include <vector>

//定义链表节点结构体
struct LinkedNode {
  int val;          //节点值 数据域
  LinkedNode *next; //指向下一个节点 指针域
  LinkedNode(int val) : val(val), next(NULL) {} //有参构造函数
};

class DesignList {
public:
  DesignList();

  //获取到第index个节点数值
  int get(int index);

  //在链表最前面插入一个节点
  void addAtHead(int val);

  //在链表最后面添加一个节点
  void addAtTail(int val);

  //在第index个节点之前插入一个新节点
  void addAtIndex(int index, int val);

  //删除第index个节点
  void deleteAtIndex(int index);

  //打印链表
  void printLinkedList();

private:
  int size; //单链表长度
  LinkedNode *dummyHead;
};

#endif // ARRAY_DESIGNLIST_H
