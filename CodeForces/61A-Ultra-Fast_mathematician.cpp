#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
typedef long long LL;

string getIt(string a, string b) {
  for (int i = 0; i < a.length(); i++) {
    if (a[i] == b[i])
      a[i] = '0';
    else
      a[i] = '1';
  }

  return a;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string a, b;
  cin >> a >> b;
  cout << getIt(a, b);
}
