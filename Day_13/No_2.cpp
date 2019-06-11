//跳石板
#if 0
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
#endif



#include <iostream>

using namespace std;

int find_max(int x, int y){
  int num = x - 1;
  while(num > 1){
    if(y % num == 0 && x % num == 0)
      return num;
    --num;
  }
  return -1;
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
