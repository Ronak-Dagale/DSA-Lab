//============================================================================
// Name        :  DSA Assignment no :- 3
// Author      :  Ronak Sandeep Dagale
// Description :  program to perform infix to postfix conversion using stack.
// Concept     :  Use of stack
//============================================================================
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

char stac[10];
int top = -1;
void push(char c) {
  top++;
  stac[top] = c;
}
char pop() {
  int t = top;
  top--;
  return stac[t];
}
int precedence(char c) {
  if (c == '^')
    return 3;
  else if (c == '/' || c == '*')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}

string infix_to_postfix(string s) {
  string ans;
  for (int i = 0; s[i] != '\0'; i++) {
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ||
        (s[i] >= '0' && s[i] <= '9')) {
      ans += s[i];
    }

    else if (s[i] == '(') {
      push('(');
    } else if (s[i] == ')') {
      while (stac[top] != '(') {
        ans += pop();
      }
      char g = pop(); // This step is to pop the bracket '('
    } else {
      while (top != -1 && precedence(s[i]) <= precedence(stac[top])) {
        ans += pop();
      }
      push(s[i]);
    }
  }
  while (top != -1) {
    ans += pop();
  }
  return ans;
}
int main() {
  int ch;
  string exp, ans;
  do {
    cout << "\n\n\t\t********Welcome to infix to postfix converter********\n\n"
         << endl;
    cout << "\t1.To convert infix expression to postfix expression\n\t2.exit"
         << endl;
    cout << "Enter your Choice :-" << endl;
    cin >> ch;
    switch (ch) {
    case 1:
      cout << "\n Enter Infix Expression :-" << endl;
      cin >> exp;
      ans = infix_to_postfix(exp);
      cout << "\n Postfix Expression :-" << endl;
      cout << ans << endl;
      break;

    case 2:
      cout << "\n\tThank you" << endl;
      break;

    default:
      cout << "Please Enter Valid Choice" << endl;
      break;
    }
  } while (ch != 2);
  return 0;
}
