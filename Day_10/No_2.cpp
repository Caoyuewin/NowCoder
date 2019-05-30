#include <iostream>
#include <string>

using namespace std;

int main() {
  string password;
  cin >> password;
  int low_letter = 0;
  int up_letter = 0;
  int number = 0;
  int symbol = 0;
  int score = 0;

  string::iterator it = password.begin();
  for(; it < password.end(); it++) {
    if(password.size() <= 4)
      score += 5;
    if(password.size() >= 5 && password.size() <= 7)
      score += 10;
    if(password.size() >= 8)
      score += 25;
    if(*it >= '0' && *it <= '9')
      number++;
    if(*it >= 'A' && *it <= 'Z')
      low_letter++;
    if(*it >= 'a' && *it <= 'z')
      up_letter++;
    else
      symbol++;
  }
  if(low_letter > 0 && up_letter > 0) 
    score += 20;
  else if (low_letter > 0 || up_letter > 0)
    score += 10;
  if(number > 1)
    score += 20;
  else if (number == 1)
    score += 10;
  if(symbol > 1) 
    score += 20;
  else if(symbol == 1)
    score += 10;
  if((up_letter > 0 || low_letter > 0) && number > 0)
    score += 2;
  else if((up_letter > 0 || low_letter > 0) && number > 0 && symbol > 0)
    score += 3;
  else if(up_letter > 0 && low_letter > 0 && number > 0 && symbol > 0)
    score += 5;
  if(score >= 90)
    cout << "VERY_SECURE" << endl;
  else if(score >= 80)
    cout << "SECURE" << endl;
  else if(score >= 70)
    cout << "VERY_STRONG" << endl;
  else if(score >= 60)
    cout << "STRONG" << endl;
  else if(score >= 50)
    cout << "AVERAGE" << endl;
  else if(score >= 25) 
    cout << "WEAK" << endl;
  else
    cout << "VERY_WEAK" << endl;
  
  return 0;


}
