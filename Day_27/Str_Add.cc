#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string Str_Add(string& a, string& b){
  size_t i = a.size();
  size_t j = b.size();
  size_t k = 0;
  string sum;
  for(; i >= 0 && j >= 0; i--, j--, k++){
    sum[k] = a[i] + b[j];
  }
  reverse(sum.begin(), sum.end());
  return sum;
}

int main() {
  string a, b;
  cin >> a >> b;
  string sum = Str_Add(a, b);
  cout << sum << endl;
}
