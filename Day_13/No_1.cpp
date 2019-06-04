#include <iostream>
#include <string>


using namespace std;

int main() {
  string command;
  getline(cin, command);


  size_t pos = 0;
  size_t spacepos = pos;

  while(pos < command.size()){
    if(command[pos] == '"'){
      int leftpos = pos;//左引号
      pos++;
      while(command[pos] != '"')
        pos++;
      //右引号
      string subcommand(command, leftpos + 1, pos - leftpos - 1);
      cout << subcommand << endl; 
      pos++;
      spacepos = pos;

    }
    else if(command[pos] == ' '){
      if(pos - spacepos != 0){
        string subcommand(command, spacepos, pos - spacepos);
        cout << subcommand <<endl;
        spacepos = ++pos;
      }
      else
        ++pos;
    }
    else
      ++pos;
  }
  string subcommand(command, spacepos + 1, command.size() - 1 - pos);
  cout << subcommand << endl;
  return 0;
}


