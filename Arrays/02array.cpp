#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
typedef long long LL;

int binarySearch(int arr[], int n, int key) {
  int start = 0, end = n - 1;
  while (start <= end) {
    int mid = (start + end) / 2;
    if (arr[mid] == key)
      return mid;
    else if (arr[mid] > key)
      end = mid - 1;
    else
      start = mid + 1;
  }

  return -1;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[] = {10, 20, 30, 40, 45, 60, 70, 89};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key;
  cin >> key;
  int index = binarySearch(arr, n, key);
  if (index != -1)
    cout << key << " is present at index " << index << endl;
  else
    cout << key << " is not present" << endl;
}

