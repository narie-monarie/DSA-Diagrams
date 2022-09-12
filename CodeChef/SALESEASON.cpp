#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
typedef long long LL;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a, b, c;
  cin >> a;
  while (a--) {
    cin >> b;
    if (b > 100 && b <= 1000)
      b -= 25;
    else if (b > 1000 && b <= 5000)
      b -= 100;
    else if (b > 5000)
      b -= 500;
    cout << b << endl;
  }
  // cout << b << endl;
}

