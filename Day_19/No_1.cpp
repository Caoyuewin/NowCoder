#include <iostream>

using namespace std;

int main() {
  int n;
  while(cin >> n) {
    if(n == 0)
      break;
    int drinked = 0;
    while(n > 2){
      drinked += n / 3;
      n = (n / 3 + n % 3);

    }
    if(n == 2)
      ++drinked;
    cout << drinked << endl;

  }

}
