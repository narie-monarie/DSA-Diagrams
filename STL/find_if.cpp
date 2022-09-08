#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
typedef long long LL;

bool isOdd(int i) { return ((i % 2) == 1); }
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> s = {2, 5, 2, 3, 45, 7};
  vector<int>::iterator it = find_if(s.begin(), s.end(), isOdd);
  cout << "The first odd value is " << *it << " ";
}

