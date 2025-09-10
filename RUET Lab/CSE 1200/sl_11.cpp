#include<bits/stdc++.h>
using namespace std;

int func(vector<int>& nums) {
    int n = nums.size();
    set<int> uniqueNumbers;
    int maxLength = 0;
    int left = 0;
    for (int right = 0; right < n; ++right) {
        while (uniqueNumbers.count(nums[right])) {
            uniqueNumbers.erase(nums[left]);
            ++left;
        }
        uniqueNumbers.insert(nums[right]);
        maxLength = max(maxLength, right - left + 1);
    }
    return maxLength;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int ans = func(nums);
    cout << ans << endl;
}
