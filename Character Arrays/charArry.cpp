#include "cstring"
#include "iostream"
#include <ostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
  char a[] = "abcdefgijkl";
  char b[100];
  char temp = cin.get();
  int len = 0;

  while (temp != '\n') {
    a[len++] = temp;
    // update the value of temp
    temp = cin.get();
  }
  a[len] = '\0';
  cout << "'s length is " << len << endl;
  cout << a << endl;
  // cout << a << " " << endl;
  // cout << strlen(a) << endl;
  // cout << sizeof(a[0]) << endl;
}