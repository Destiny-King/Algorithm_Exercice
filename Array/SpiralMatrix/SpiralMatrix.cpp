//
// Created by Destiny on 2022/7/19.
//

#include "SpiralMatrix.h"

vector<vector<int>> SpiralMatrix::generateMatrix(int n) {
  vector<vector<int>> res(n, vector<int>(n, 0)); //使用vector定义一个二维数组
  int startx = 0; //定义每循环一个圈的起始位置
  int starty = 0;
  int loop = n / 2; //每个圈循环几次
  int mid = n / 2;  //矩阵中间的位置
  int count = 1;    //用来给矩阵中每一个空格赋值
  int offset = 1; //需要控制每一条遍历的长度，每次循环右边界收缩一位
  int i, j;
  while (loop--) {
    i = startx;
    j = starty;

    //模拟填充上行从左到右(左闭右开)
    for (j = starty; j < n - offset; j++) {
      res[startx][j] = count++;
    }
    //模拟填充右列从上到下(左闭右开)
    for (i = startx; i < n - offset; i++) {
      res[i][j] = count++;
    }
    //模拟填充下行从右到左(左闭右开)
    for (; j > starty; j--) {
      res[i][j] = count++;
    }
    //模拟填充左列从下到上(左闭右开)
    for (; i > startx; i--) {
      res[i][j] = count++;
    }

    //第二圈开始的时候，起始位置要各自加1
    startx++;
    starty++;

    // offset控制每一圈里每一条边遍历的长度
    offset += 1;
  }

  //如果n为奇数，单独给矩阵中间的位置赋值
  if (n % 2) {
    res[mid][mid] = count;
  }

  return res;
}
