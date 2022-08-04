//
// Created by Destiny on 2022/8/4.
//

#include "SwapPairs.h"

//初始化链表
void SwapPairs::initList(ListNode *head) {
  vector<int> nums = {1, 4, 2, 4, 3, 4}; //待创建链表的数值内容

  ListNode *cur = head;
  for (int i = 1; i < nums.size(); ++i) { //通过循环把数组里的值依次放到链表
    ListNode *newNode = new ListNode(nums[i]); //创建新节点并赋值
    cur->next = newNode; //上一个节点的next指向这个新建的节点
    cur = newNode;       //保留新节点
  }
}

//显示链表
void SwapPairs::showList(ListNode *head) {
  ListNode *cur = head;
  while (cur != NULL) { //为NULL则节点输出结束
    cout << cur->val << " ";
    cur = cur->next;
  }
  cout << endl;
}

ListNode *SwapPairs::swapPairs(ListNode *head) {
  ListNode *dummyHead = new ListNode(0); //设置虚拟头结点
  dummyHead->next = head;                //将虚拟头结点指向head
  ListNode *cur = dummyHead;
  //链表是奇数或者偶数:顺序不可颠倒，防止空指针异常
  while (cur->next != nullptr && cur->next->next != nullptr) {
    ListNode *tmp = cur->next;              //记录临时节点
    ListNode *tmp1 = cur->next->next->next; //记录临时节点

    //交换步骤
    cur->next = cur->next->next;
    cur->next->next = tmp;
    cur->next->next->next = tmp1;

    cur = cur->next->next; // cur移动两位
  }
  return dummyHead->next;
}
