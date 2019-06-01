#include <iostream>

using namespace std;

int main() {
  int n;
  while(cin >> n){
  //cin >> n;
    int count = 0,maxcount = 0;
    while(n){
      if(n % 2 == 1){
        count++;
        if(count > maxcount)
          maxcount = count;
      }
      else{
        count = 0;
      }
      n /= 2;
    }
    cout << maxcount << endl;
  }
  return 0;

}
