//跳石板

#include <iostream>

using namespace std;

int find_max(int x, int y){
  int num = x - 1;
  int max_divisor = -1;
  while(num < x && num > 1){
    if(y % num == 0 && x % num == 0){
      if(max_divisor < num)
        max_divisor = num;
    }
    --num;
  }
  
  return max_divisor;
}

int main(){
  int n, m, steps = 0;
  cin >> n >> m;
  while(n < m){
    int maxnum = find_max(n, m);
    if(maxnum != -1){
      n += maxnum;
      ++steps;

    }
    else
      steps = -1;
  }
  cout << steps << endl;
  return 0;

}

