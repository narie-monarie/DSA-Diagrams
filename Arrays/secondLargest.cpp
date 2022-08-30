#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int vectorize(vector<int> &B, int n) {
  int largest = 0, secondLargest = -1;

  for (int i = 0; i < n; i++) {
    if (B[i] > B[largest])
      largest = i;
  }

  for (int i = 0; i < n; i++) {
    if (B[i] != B[largest]) {
      if (secondLargest == -1)
        secondLargest = i;
      else if (B[i] > B[secondLargest])
        secondLargest = i;
    }
  }
  return secondLargest;
}

int main() {
  vector<int> B = {12, 45, 65, 21, 7, 334, 76, 34};
  // cout << vectorize(B, B.size());
  vector<string> v = {"2", "1", "7", "3"};
  sort(v.begin(), v.end());
  for (auto x : v)
    cout << x << " ";
}
