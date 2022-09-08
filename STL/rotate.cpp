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
  vector<int> v = {3, 8, 9, 7, 6};
  int k = 3;
  int len = v.size();
  int y = k % len;
  // std::rotate(v.begin(), v.begin() + len - k, v.end());
  // for (auto x : v) cout << x << " ";
  std::nth_element(v.begin(), v.begin() + 1, v.end());
  cout << endl;
  for (auto x : v) cout << x << " ";
  cout << endl;
}

