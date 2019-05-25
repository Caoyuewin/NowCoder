#include <iostream>
#include <vector>

using namespace std;

int main(){
  std::vector<int> v;
  size_t n, pos = 1,flag = 0;
  while(cin >> n){
    v.push_back(n);
  }

  int Maxsum = 0;
  int sum = v[pos];
  while(pos <= v.size()){
    if(v[pos] - v[pos-1] == 1){
       sum += v[pos];
       if(sum > Maxsum){
         Maxsum = sum;
       }
      pos++;
      continue;
    }
    if(v[pos] - v[pos-1]){
      sum += v
    }
  }
  
}

