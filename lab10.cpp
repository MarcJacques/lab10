#include <iostream>
#include <string>
using namespace std;

int main () 
{
  string input;
  int lowercaseTotal,uppercaseTotal, stringLength, totalDigits, totalSpace;
  char currentCharacter;

  getline(cin, input);
  //total characters
  stringLength = input.length();
  //iterate through letters
  for (int i = 0; i <= stringLength; i++) {
    currentCharacter = input.at(i);

    switch (currentCharacter) {     
      //total uppercase
      case 32: totalSpace += 1;
      break;
      case 65 ... 90: uppercaseTotal += 1;
      break;
      //total upper
      case 97 ... 122: lowercaseTotal += 1;
      break;
      //total digits
      case 48 ... 57: totalDigits += 1;
      break;
      default: continue;
    }
  
  }
  cout << stringLength << endl;
  cout << lowercaseTotal << endl;
  cout << uppercaseTotal << endl;
  cout << totalDigits << endl;
  cout << stringLength << endl;
  
  return 0;
}