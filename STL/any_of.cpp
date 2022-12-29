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
  vector<int> v = {1, 2, 3, 4, 5};
  if (any_of(v.begin(), v.end(), [](int i) { return i < 3; })) //lambda expression
    cout << "hallo"
         << " ";
  return 0;
}

