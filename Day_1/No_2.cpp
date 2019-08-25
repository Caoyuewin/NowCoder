#if 0
标题：删除公共字符 | 时间限制：1秒 | 内存限制：32768K
输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。例如，输入”They are
students.”和”aeiou”，则删除之后的第一个字符串变成”Thy r stdnts.”
输入描述：
每个测试输入包含2个字符串
输出描述：
输出删除后的字符串
示例1:
输入
They are students. aeiou
输出
Thy r stdnts.
#endif

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    
}
#if 0
class Del_char{
  public:
    Del_char(char* str1, char* str2){
      _str1 = str1;
      _str2 = str2;
    }
    void Delete(){
      char* p1 = _str1;
      char* p2 = _str2;
      while(*p2++){
        if(*p2 == *p1){
           
        }
      }
    }

  private:
    char* _str1;
    char* _str2;
}; 
#endif

//1.遍历查找删除
//2.贪心算法



//int main(){
//  string A("abcd2342343212677");
//  string B("231");
//  auto cur = A.begin();
//  while(cur != A.end()){
//    if(B.find(*cur) != -1){
//      A.erase(cur);
//
//    }
//  }
//
//}
