class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = nums[0];
        int result = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            max_so_far = max(nums[i], nums[i] + max_so_far);
            result = max(result, max_so_far);
        }
        return result;
    }
};