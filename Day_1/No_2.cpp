#if 0
输入两个字符串，从第一个字符串中删除所有第二个字符串包含的字符后输出
#endif

#include <iostream>
#include <string>

using namespace std;


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

int main(){
  string A("abcd2342343212677");
  string B("231");
  auto cur = A.begin();
  while(cur != A.end()){
    if(B.find(*cur) != -1){
      A.erase(cur);

    }
  }

}