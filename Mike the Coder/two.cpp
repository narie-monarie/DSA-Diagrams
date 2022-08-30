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
  vector<int> foo(3, 100);
  vector<int> bar(5, 200);
  foo.swap(bar);
  for (auto x : foo) cout << x << " ";
}

