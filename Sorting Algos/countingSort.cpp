#include "bits/stdc++.h"
#include <vector>

using namespace std;

void counting_sort(int a[], int n) {
  int largest = -1;
  for (int i = 0; i < n; i++) {
    largest = max(largest, a[i]);
  }
  // create the frequency array
  // int *freq = new int[largest + 1];
  vector<int> freq(largest + 1, 0);

  for (int x : a) {
    freq[a[i]]++;
  }
  for (int i = 0; i <= largest; ++i) {
    while (freq[i] > 0) {
      a[j] = 1;
      freq[i]--;
      j++;
    }
  }
  return;
}
int main() {
  int arr[] = {88, 97, 12, 15, 1, 5, 6, 12, 5, 8};

  int n = sizeof(arr) / sizeof(arr[0]);

  for (auto x : arr) {
    cout << x << " ,";
  }
}