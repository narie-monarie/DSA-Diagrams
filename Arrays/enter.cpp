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
  int marks[100];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> marks[i];
  }

  // output
  for (int i = 0; i < n; i++) {
    cout << marks[i] << " ";
  }
  return 0;
}

