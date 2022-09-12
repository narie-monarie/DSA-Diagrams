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
  int a, b, c, d, e;
  cin >> a;
  while (a--) {
    cin >> b >> c >> d >> e;
    if ((d * e) >= (b * c))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
