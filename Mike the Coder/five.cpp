#include "bits/stdc++.h"

using namespace std;

template <typename T> T add(T a, T b) { return a + b; }
int main() {
  int a = 2, b = 4;
  long c = 10, d = 11;

  int k = add<int>(a, b);
  long n = add<long>(c, d);
  cout << k << " " << n;
}
