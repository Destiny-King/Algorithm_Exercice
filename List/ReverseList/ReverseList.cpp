//
// Created by Destiny on 2022/8/3.
//

#include "ReverseList.h"

//初始化链表
void ReverseList::initList(ListNode *head) {
  vector<int> nums = {1, 4, 2, 4, 3, 4}; //待创建链表的数值内容

  ListNode *cur = head;
  for (int i = 1; i < nums.size(); ++i) { //通过循环把数组里的值依次放到链表
    ListNode *newNode = new ListNode(nums[i]); //创建新节点并赋值
    cur->next = newNode; //上一个节点的next指向这个新建的节点
    cur = newNode;       //保留新节点
  }
}

//显示链表
void ReverseList::showList(ListNode *head) {
  ListNode *cur = head;
  while (cur != NULL) { //为NULL则节点输出结束
    cout << cur->val << " ";
    cur = cur->next;
  }
  cout << endl;
}

//双指针法
ListNode *ReverseList::reverseList_DoublePointer(ListNode *head) {
  ListNode *temp; //保存cur的下一个节点
  ListNode *cur = head;
  ListNode *pre = NULL;

  while (cur) {
    temp = cur->next; //保存一下cur的下一个节点
    cur->next = pre;  //反转操作
    //更新pre和cur指针
    pre = cur;
    cur = temp;
  }
  return pre;
}

//递归法
ListNode *ReverseList::reverseList_Recursion(ListNode *head) {
  //边缘条件判断
  if (head == NULL)
    return NULL;
  if (head->next == NULL)
    return head;

  //递归调用，反转第二个节点开始往后的链表
  ListNode *last = reverseList_Recursion(head->next);
  //反转头节点与第二个节点的指向
  head->next->next = head;
  //此时的head节点为尾结点，next需要指向NULL
  head->next = NULL;
  return last;
}
