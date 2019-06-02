#include <iostream>


using namespace std;

class LCA {
  public:
    int getLCA(int a, int b) {
      while(a != b) {
        if(a > b)
          a /= 2;
        else
          b /= 2;
      }
      return a;


    }

};


int main() {
  int a, b;
  cin >> a >> b;
  LCA l;
  cout << l.getLCA(a,b) << endl;
  return 0;
}
