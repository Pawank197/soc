#include <bits/stdc++.h>
using namespace std;

void findAllSubset(int k, const vector<int>& nums, vector<int>& current, vector<vector<int>>& allSubsets) {
  if(k == nums.size()) {
    allSubsets.push_back(current);
  }
  else {
    findAllSubset(k+1, nums, current, allSubsets);
    current.push_back(nums[k]);

    findAllSubset(k+1, nums, current, allSubsets);
    current.pop_back();
  }
}

vector<vector<int>> getAllSubsets(const vector<int>& nums) {
  vector<vector<int>> allSubsets;
  vector<int> current;
  findAllSubset(0, nums, current, allSubsets);
  return allSubsets;
}

int main() {
  vector<int> v;
  int n; cin >> n;
  for(int i = 0; i<n; i++) {
    int x; cin >> x;
    v.push_back(x);
  }

  auto subsets = getAllSubsets(v);
  for (const auto& subset : subsets) {
    std::cout << "{";
    for (int num : subset) std::cout << num << ", ";
    std::cout << "}\n";
}
}
  