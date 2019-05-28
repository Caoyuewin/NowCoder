#if 0
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
#endif

#include <iostream>
#include <vector>

using namespace std;

int main(){
  std::vector<int> v;

  size_t n, pos = 0,flag = 1;

  while(cin >> n){
    v.push_back(n);

  }
cout<<"over"<<endl;
  int Maxsum = 0;
  int sum;
  while(pos < v.size()){
    if(v[pos] - v[pos+1] == 1){
      if(flag == 1){
        sum = v[pos];
        flag = 0;

      }
      sum += v[pos];
      if(sum > Maxsum){
        Maxsum = sum;

      }
      pos++;
      continue;

    }
    if(v[pos] - v[pos+1] == -1){
      if(flag == 0){
        sum = 0;
        flag = 1;

      }
      sum += v[pos];
      if(sum > Maxsum){
        Maxsum = sum;

      }
      pos++;
      continue;

    }

  }
  cout<<Maxsum<<endl;
  return 0;


}


