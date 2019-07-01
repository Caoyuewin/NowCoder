#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  while (cin >> s) {
    int sum = 0;
    do {
      sum = 0;
      for (unsigned int i = 0; i < s.size(); i++) {
        sum += (s[i] - '0');

      }
      int i = 0;
      int tmp = sum;
      for (i = 0; tmp; i++) {
        s[i] = tmp % 10 + '0';
        tmp /= 10;

      }
      s.resize(i);

    } while (sum > 9);
    cout << s << endl;

  }


  return 0;

}
