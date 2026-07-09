class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int s=nums[0];
        int ans=nums[0];
        int s1=nums[0];
        int ans1=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            s=max(nums[i],nums[i]+s);
            ans=max(ans,s);
            s1=min(nums[i],nums[i]+s1);
            ans1=min(ans1,s1);
        }
     return max(ans,abs(ans1));   
    }
};