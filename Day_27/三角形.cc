#include <iostream>
#include <string>

using namespace std;

void Compare_Str(string& s1, string& s2){
  if(s2.size() < s1.size())
    return;
  if(s2.size() > s1.size()){
    swap(s1, s2);
    return;
  }
  //s1.size == s2.size
  if(s2 > s1)
    swap(s1, s2);
}

void Rank(string& s1, string& s2, string& s3){
  Compare_Str(s2, s3);
  Compare_Str(s1, s2);
  
}

int main() {
  string a, b, c;
  while(cin >> a >> b >> c){
    Rank(a, b, c);
    size_t i = 0;
    for(; i < c.size(); i++){
      b[i] = (b[i] - '0') + (c[i] - '0');
    }
  }
}
