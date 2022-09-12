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
  int a, b, c, d, s;
  cin >> a >> b >> c >> d;
  if (a == b || a == c || a == d) s++;
  if (b == c || b == d) s++;
  if (c == d) s++;
  cout << s;
}

