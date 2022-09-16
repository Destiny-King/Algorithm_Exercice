//
// Created by Destiny on 2022/9/19.
//

#include "ValidParentheses.h"

bool ValidParentheses::isValid(string s) {
  if (s.size() % 2 != 0)
    return false;
  stack<char> st;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '(')
      st.push(')');
    else if (s[i] == '[')
      st.push(']');
    else if (s[i] == '{')
      st.push('}');
    // 第三种情况：遍历字符串匹配的过程中，栈已经为空了，没有匹配的字符了，说明右括号没有找到对应的左括号。
    // 第二种情况：遍历字符串匹配的过程中，发现栈里没有我们要匹配的字符。
    else if (st.empty() || st.top() != s[i])
      return false;
    else
      st.pop();
  }
  // 第一种情况：此时我们已经遍历完了字符串，但是栈不为空，说明有相应的左括号没有右括号来匹配。
  return st.empty();
}
