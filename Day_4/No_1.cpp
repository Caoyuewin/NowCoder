//分糖果


#include <iostream>

using namespace std;

int main() {
  int N1, N2, N3, N4;
  cin >>N1 >> N2 >> N3 >> N4;
  int A,B,C;
  A = (N1+N3) / 2;
  B = (N3-N1) / 2;
  C = (N4-N2) / 2;
  if(A > 0 && B > 0 && C > 0){
    cout<<A<<" "<<B<<" "<<C<<" "<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
  return 0;
}
