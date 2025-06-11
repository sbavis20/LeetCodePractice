class Solution {
public:
int solve(vector<int>& nums, int s, int e, int target) {
    if (s > e)
        return s;

    int mid = s + (e - s) / 2;

    if (nums[mid] == target)
        return mid;

    if (nums[mid] > target)
        return solve(nums, s, mid - 1, target);
    else
        return solve(nums, mid + 1, e, target);
}

int searchInsert(vector<int>& nums, int target) {
    return solve(nums, 0, nums.size() - 1, target);
}

};
