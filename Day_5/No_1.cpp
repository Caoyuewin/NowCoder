#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string A;
  string B;
  string RA;

  getline(cin, A);
  getline(cin, B);
  int _count = 0;//计数器

  string A_copy(A);
  size_t pos = 0;
  while(pos != A_copy.size()){
    A = A_copy;
    A.insert(pos, B);
    //cout<<A<<endl;
    RA = A;
    //cout<<RA<<endl;
    reverse(RA.begin(), RA.end());
    if(!A.compare(RA)){
      ++_count;
    }
    ++pos;
    //cout<<pos<<endl;
  }
  cout << _count << endl;
  return 0;
}

#if 0
int main() {
  string A("aba");
  string B("b");
  A.insert(1, B);
  cout << A <<endl;
  return 0;
}
#endif
