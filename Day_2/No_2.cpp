//将一句英语倒置，只倒置句子，不倒置单词和标点
//I like beijing --->  gnijieb ekil I


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


//void ReverseWord(string& arr, size_t begin, size_t pos){
 // reverse
//}

}

  int main() {
    string str;
    while(getline(cin, str)){
      size_t begin = 0, end = str.size() - 1, pos = 0;
      reverse(str.begin(), str.end() - 1);
      //gnijieb ekil I
      while(pos != -1){
        pos = str.find(' ', 0);
        //reverse(str.begin(), str[pos]);
        _reverse(str.begin(), pos)
        begin = pos + 1;
      }
      cout<<str<<endl;
      return 0;

    }

  }
