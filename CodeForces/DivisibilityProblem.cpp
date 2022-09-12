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
  int a, sum;
  cin >> a;
  while (a--) {
    int n, c, e;
    cin >> n >> c;
    e = n % c;
    if (n % c == 0)
      sum = 0;
    else
      sum = c - e;
    cout << sum << endl;
  }
}
