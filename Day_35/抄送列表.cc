#include <iostream>
#include <string>
using namespace std;

bool Is_In_List(string& cslist, string& name) {
  size_t i = 0;
  int pos;
  string tmp;
  for (; i < cslist.size(); i++) {
    if (cslist.find_first_of(',', i) != string::npos) {
      pos = cslist.find_first_of(',', i);

    }
    else
      pos = cslist.size() - 1;
    tmp = cslist.substr(i, pos - i);
    if (tmp.find(name) != string::npos) {
      return true;

    }
    i = pos;


  }
  return false;

}


int main() {
  string cslist, name;
  while (getline(cin, cslist) && getline(cin, name)) {
    if (name.size() == 0) {
      cout << "Important" << endl;
      continue;

    }
    cout << "Important!" << endl;
    int ret = Is_In_List(cslist, name);
    if (ret == 0)
      cout << "Important!" << endl;
    else
      cout << "Ignore" << endl;

  }

  return 0;

}

