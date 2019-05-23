//在一行内输出str内最长的数字串
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  auto it = str.begin();
  int max, length = 0;
  while(getline(cin, str)){
    while(it != str.end()){
      if(*it >= 48 && *it <= 57){
        length++;
        it++;
      }
      else{
        if(length > max){
          max = length;
          it++;
        }
          length = 0;
        
      }

    }

  }
  return 0;

}
