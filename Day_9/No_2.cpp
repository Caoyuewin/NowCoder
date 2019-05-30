#include <iostream>
#include <vector>


using namespace std;

int Ways(int x, int y, vector< vector<int> > vv) {
  vector<vector<int>>::iterator it = vv.begin();
  if(it = vv[x][y])
    
}


void initboard(int x, int y) {
  vector<vector<int>> vv;
  vv.resize(x);
  int i = 0;
  for(; i < x; i++)
    vv[i].resize(y);
   
    
  if()
}

int main() {
  int n,m;
  cin >> n >> m;
  int ways = Ways(n, m);
  cout << ways << endl;
  return 0;
}
