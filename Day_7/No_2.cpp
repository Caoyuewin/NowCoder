//给定一个字符串A和它的长度n，请判断它是不是一个合法的括号串并返回一个bool值
#include <stack>
#include <iostream>
#include <string>

using namespace std;


class Parenthesis {
  public:
    bool parentthesis(string A, int n) {
    string::iterator it = A.begin();
    stack<char> s;
    while(it < A.end()) {
      if(*it == '(')
        s.push(*it);
      if(*it == ')' && s.top() == '(')
        s.pop();
      else
        return false;
      it++;

    }

    return true;
  }
};

int main() {
  string A("() ()(())");
  int n = A.size();
  Parenthesis p;
  cout<< p.parentthesis(A, n)<<endl;
  return 0;
  
}



