#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  vector<int> B = {1, 2, 3, 4, 5};
  int k = 1 % B.size();
  reverse(B.begin(), B.end());
  reverse(B.end(), B.end() - k);
  reverse(B.begin(), B.end() - k);
  for (auto x : B)
    cout << x << " ";
}
