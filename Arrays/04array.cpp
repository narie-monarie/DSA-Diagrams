#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
typedef long long LL;

void printPairs(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int c = arr[i];
    for (int j = i + 1; j < n; j++) {
      int x = arr[j];
      cout << c << "," << x << endl;
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[] = {10, 20, 30, 40, 50, 60};
  int n = sizeof(arr) / sizeof(arr[0]);
  printPairs(arr, n);
}

