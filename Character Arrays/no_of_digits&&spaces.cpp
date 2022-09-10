#include "cstring"
#include "iostream"

using namespace std;

int main() {
  // store and then count or read 1 by one

  char ch;
  ch = cin.get();

  // Count
  int alpha = 0;
  int space = 0;
  int digit = 0;

  while (ch != '\n') {
    if (ch >= '0' and ch <= '9') {
      digit++;
    } else if (ch >= 'a' and ch <= 'z' || ch >= 'A' and ch <= 'z') {
      alpha++;
    } else if (ch == ' ' or ch == '\t') {
      space++;
    }
    ch = cin.get();
  }
  cout << " total alphabets are " << alpha << endl;
  cout << " total Digits are " << digit << endl;
  cout << " total Spaces are " << space << endl;
}