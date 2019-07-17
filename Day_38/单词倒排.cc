/*
对字符串中的所有单词进行倒排。
说明：
1、每个单词是以26个大写或小写英文字母构成；
2、非构成单词的字符均视为单词间隔符；
3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；
4、每个单词最长20个字母；
输入描述:
输入一行以空格来分隔的句子
输出描述:
输出句子的逆序

示例1
输入
I am a student
输出
student a am I
*/

#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

string Reverse_Sen(string& sen) {
  reverse(sen.begin(),sen.end());
  string tmp,reverse_sen;
  size_t i = 0,pos = 0;
  for(; i < sen.size(); i++) {
    if(sen[i] == ' ' || i == sen.size() - 1){
      tmp = sen.substr(pos,i-pos);
      reverse(tmp.begin(),tmp.end()); 
      reverse_sen += tmp;
      pos = i+1;
      if(i != sen.size() - 1){
        reverse_sen += ' ';
      }
    }
  }
  return reverse_sen;
}

int main() {
  string sen;
  while(cin >> sen) {
    string reverse_sen = Reverse_Sen(sen);
    cout << reverse_sen <<endl;
  }
}
