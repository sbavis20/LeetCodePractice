class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_sum = INT_MIN;

        int left = 0;
        int right = nums.size()-1;

        while(left<right){
            int sum = nums[left]+nums[right];
            if(sum>max_sum){
                max_sum=sum;
            }
            left++;
            right--;
        }
        return max_sum;
    }
};
