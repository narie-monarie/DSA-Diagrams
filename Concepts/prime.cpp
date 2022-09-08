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
  int i = 10;
  int z = 1;
  for (int i = 0; i <= 10; i++) {
    if (i % z == 0) {
      i++;
    } else {
      cout << i;
    }
  }
}

