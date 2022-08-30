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
  vector<int> data(10, 3);
  vector<int> copy(6, 7);
  data.push_back(12);
  data.pop_back();
  vector<int>::iterator it = data.begin();
  *it = 2;
  //  data.insert(data.begin() + 7, 3, 9);  // insert 3 nines in 7th position
  // data.insert(data.end(), copy.begin(), copy.end());
  // data.insert(data.cbegin(), {1, 2, 3, 4, 5, 6});
  data.erase(data.cbegin() + 2, data.cbegin() + 7);

  for (auto a : data) cout << a << " ";
}
