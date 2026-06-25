class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        long long cs=nums[0];
        long long ms=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                cs=max(cs,cs+nums[i]);
                ms=max(ms,cs);
            }
            else
            {
                cs=nums[i];
            }
        }
        return ms;   
    }
};