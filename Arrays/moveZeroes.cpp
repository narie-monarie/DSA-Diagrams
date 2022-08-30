#include "bits/stdc++.h"
#include <vector>

using namespace std;

void moveZeroes(vector<int> &nums) {
  int r = 0;
  for (int i = 0; i <= nums.size() - 1; i++) {
    if (nums[r] == 0) {
      nums.erase(nums.begin() + r);
      nums.push_back(0);
      r++;
    } else if (nums[r - 1] == 0) {
      nums.erase(nums.begin() + r - 1);
      nums.push_back(0);
    } else {
      r++;
    }
  }
}

int main() {}
