#include "bits/stdc++.h"
#include <fstream>
using namespace std;

void selectionSort(int a[], int n) {
  for (int i = 0; i <= n - 1; ++i) {
    int current = a[i];
    int min_position = i;
    // find the minimum element
    for (int j = i; j < n; j++) {
      if (a[j] < a[min_position]) {
        min_position = j;
      }
    }
    swap(a[min_position], a[i]);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, n);
  for (auto x : arr) {
    cout << x << " ,";
  }

  return 0;
}
