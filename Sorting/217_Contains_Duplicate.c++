#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class Solution {
public:
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num)) return true;
        seen.insert(num);
    }
    return false;
}
};

int main() {
    vector<int> nums1 = {1, 2, 3, 1};     // true
    vector<int> nums2 = {1, 2, 3, 4};     // false
    vector<int> nums3 = {};              // false
    vector<int> nums4 = {5, 5, 5, 5};     // true
    vector<int> nums5 = {1};             // false

    Solution s;
    cout << s.containsDuplicate(nums1) << endl;
    cout << s.containsDuplicate(nums2) << endl;
    cout << s.containsDuplicate(nums3) << endl;
    cout << s.containsDuplicate(nums4) << endl;
    cout << s.containsDuplicate(nums5) << endl;

    return 0;
}
