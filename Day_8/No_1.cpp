//判断字符串的排列方式


#include <iostream>
#include <string>
#include <vector>


using namespace std;

bool Is_Lex(vector<string>& v) {
  //后一个字符串始终大于前一个字符串
  int i = 0;
  while(i < v.size()){
    if(v[i].compare(v[i +1]) >= 0)
      return false; 
    i++;
 }
  return true;
}

int Is_Lenth(vector<string>& v) {
  int i = 0;
  while(i < v.size()){
    if(v[i].size() > v[i+1].size())
      return false;
    i++;

  } 
  return true;
}

int main () {
  int n;
  vector<string> v;
  cin >> n;
  int i = n;
  v.reserve(n);
  while(i < n) {
    getline(cin, v[i]);
    i++;
  } 
  if(Is_Lex(v) || Is_Lenth(v)){
    if(Is_Lex(v) == 0)
      cout<<"lengths"<<endl;
    else if(Is_Lenth(v) == 0)
      cout<<"lexicographically"<<endl;
    else
      cout<<"both"<<endl;
  }
  else{
    cout<<"none"<<endl;
  }
  return 0; 
}
