//
// Created by Destiny on 2022/8/10.
//

#include "IntersectList.h"

ListNode *IntersectList::initList(ListNode *head) {
  vector<int> nums = {1, 2, 4, 3, 4}; //待创建链表的数值内容

  ListNode *cur = head;
  for (int i = 1; i < nums.size(); ++i) { //通过循环把数组里的值依次放到链表
    ListNode *newNode = new ListNode(nums[i]); //创建新节点并赋值
    cur->next = newNode; //上一个节点的next指向这个新建的节点
    cur = newNode;       //保留新节点
  }
  return head;
}

ListNode *IntersectList::initList2(ListNode *head) {
  vector<int> nums = {5, 4, 3, 4}; //待创建链表的数值内容

  ListNode *cur = head;
  for (int i = 1; i < nums.size(); ++i) { //通过循环把数组里的值依次放到链表
    ListNode *newNode = new ListNode(nums[i]); //创建新节点并赋值
    cur->next = newNode; //上一个节点的next指向这个新建的节点
    cur = newNode;       //保留新节点
  }
  return head;
}

void IntersectList::showList(ListNode *head) {
  ListNode *cur = head;
  while (cur != NULL) { //为NULL则节点输出结束
    cout << cur->val << " ";
    cur = cur->next;
  }
  cout << endl;
}

ListNode *IntersectList::getIntersectionNode(ListNode *headA, ListNode *headB) {
  ListNode *curA = headA;
  ListNode *curB = headB;
  int lenA = 0, lenB = 0;
  while (curA != NULL) { //求链表A的长度
    lenA++;
    curA = curA->next;
  }
  while (curB != NULL) { //求链表B的长度
    lenB++;
    curB = curB->next;
  }
  curA = headA;
  curB = headB;
  //让curA为最长链表的头，lenA为其长度
  if (lenB > lenA) {
    swap(lenA, lenB);
    swap(curA, curB);
  }
  //求长度差
  int gap = lenA - lenB;
  //让curA和curB在同一起点上（末尾位置对齐）
  while (gap--) {
    curA = curA->next;
  }
  //遍历curA和curB，遇到相同则直接返回
  while (curA != NULL) {
    if (curA->val == curB->val) {
      return curA;
    }
    curA = curA->next;
    curB = curB->next;
  }
  return NULL;
}
