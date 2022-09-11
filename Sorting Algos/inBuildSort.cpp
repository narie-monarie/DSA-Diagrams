#include "bits/stdc++.h"
#include <algorithm>

using namespace std;

bool compare(int a, int b) { return a > b; }

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  sort(arr, arr + n, compare);
  for (auto x : arr) {
    cout << x << " ,";
  }

  return 0;
}
