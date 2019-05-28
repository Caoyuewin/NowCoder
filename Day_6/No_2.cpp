/*
 *  字符串转转整数
 *
 */


#include <iostream>
#include <string>
using namespace std;

#if 0
class solution{
  public:
    int StrToInt(string str){
      if(str.size() == 0)
        return 0;
      if(str[0] != '+' || str[0] != '-')
        return 0;
      string::iterator it;
      int size = str.size();
      int array[size] = {0};
      int i = 0;
      while(it < str.end()){
        if(*it < 48 || *it > 57)
          return 0;
        array[i] = *it;
        it++;
        i++;
      }
      return 
    }
};
#endif

class solution{
  private:
    int StrToInt(string str) {
      if(str.size() == 0) {
        return 0;
      }  
    }

};
