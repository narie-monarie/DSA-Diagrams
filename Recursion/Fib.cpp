#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
typedef long long LL;

int fib(int n) {
  if (n < 0) return -1;
  if (n <= 1) return n;
  return fib(n - 1) + fib(n - 2);
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout << fib(12);
}

