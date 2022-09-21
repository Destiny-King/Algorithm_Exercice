//
// Created by Destiny on 2022/9/21.
//

#include "EvalRPN.h"

int EvalRPN::evalRPN(vector<string> &tokens) {
  stack<int> st;
  for (int i = 0; i < tokens.size(); ++i) {
    if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" ||
        tokens[i] == "/") {
      int num1 = st.top();
      st.pop();
      int num2 = st.top();
      st.pop();
      if (tokens[i] == "+")
        st.push(num2 + num1);
      if (tokens[i] == "-")
        st.push(num2 - num1);
      if (tokens[i] == "*")
        st.push(num2 * num1);
      if (tokens[i] == "/")
        st.push(num2 / num1);
    } else {
      st.push(stoi(tokens[i])); // stoi: 将数字字符转化位int输出
    }
  }
  int result = st.top();
  st.pop();
  return result;
}
