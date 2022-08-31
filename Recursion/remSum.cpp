#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
typedef long long LL;

int remSum(int n) { return (n % 10 + n / 10); }
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout << remSum(54);
}

