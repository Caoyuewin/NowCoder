#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void str_to_num(string& str){
  size_t i = 0;
  for(; i < str.size(); i++){
    str[i] -= '0';
  }
}
string Big_Add(string& s1, string& s2){
  //将字符变成数字
  //str_to_num(s1);
  //str_to_num(s2);
  //反转字符串
  reverse(s1.begin(), s1.end());
  reverse(s2.begin(), s2.end());
  //进位位
  int carry = 0;
  //暂存每两位的和
  int tmp = 0;
  size_t i = 0;
  string sum;
  sum.reserve(s1.size() + s2.size());
  for(; i < s1.size() || i < s2.size(); i++){
    tmp = (s1[i] - '0') + (s2[i] - '0') + carry;
    if(tmp >= 10){
      carry = tmp / 10;
    }
    else
      carry = 0;
    sum[i] = tmp % 10;
  }
  //处理最高位
  if(sum[i] >= 10){
    sum[i+1] = sum[i] / 10;
    sum[i] %= 10;
  }
  reverse(sum.begin(), sum.end());
  return sum;
}

int main() {
  string a, b;
  cin >> a >> b;
  cout << Big_Add(a,b) << endl;
  return 0;
}

#if 0
string Str_Add(string& a, string& b){
  size_t i = a.size();
  size_t j = b.size();
  size_t k = 0;
  string sum;
  for(; i >= 0 && j >= 0; i--, j--, k++){
    sum[k] = a[i] + b[j];
  }
  reverse(sum.begin(), sum.end());
  return sum;
}

int main() {
  string a, b;
  cin >> a >> b;
  string sum = Str_Add(a, b);
  cout << sum << endl;
}
#endif
