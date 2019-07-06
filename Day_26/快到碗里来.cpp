#include <iostream>
#include <string>

using namespace std;

long double r_to_c(string r){
  char carry = '0';
  char product = '0';
  int i = r.size() - 1;
  for(; i >= 0; i--){

  }
}

 
int main() {
  string n,r;
  while(cin >> n >> r){
    if(n.size() >  r.size())
      cout << "Yes" << endl;
    else if(n.size() - r.size() > 2)
      cout << "No" << endl;
    else
      Compare_n_r(n,r);

  }
  return 0;
}
