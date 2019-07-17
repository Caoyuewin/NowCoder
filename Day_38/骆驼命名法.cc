#include <iostream>
#include <string>

using namespace std;

string Cpp_To_Java(string& cpp) {
  size_t i = 0;
  for(; i < cpp.size(); i++){
    if(cpp[i] == '_'){
      cpp[i+1] -= 32;
      cpp.erase(i,1);
    }
  }
  return cpp;
}


int main() {
  string cpp,java;
  while(cin >> cpp){
    java = Cpp_To_Java(cpp);
    cout << java << endl;
  }
  return 0;
}
