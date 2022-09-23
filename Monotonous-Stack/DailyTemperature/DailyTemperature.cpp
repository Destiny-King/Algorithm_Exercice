//
// Created by Destiny on 2022/9/23.
//

#include "DailyTemperature.h"

//单调栈
vector<int> DailyTemperature::dailyTemperatures(vector<int> &T) {
  stack<int> st; //递增栈
  vector<int> result(T.size(), 0);
  for (int i = 0; i < T.size(); ++i) {
    while (!st.empty() && T[i] > T[st.top()]) {
      result[st.top()] = i - st.top();
      st.pop();
    }
    st.push(i);
  }
  return result;
}
