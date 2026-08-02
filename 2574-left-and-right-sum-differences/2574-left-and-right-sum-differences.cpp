class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int leftsum=0;
        int rightsum=0;
        int t=0;
        for(int v:nums)
          t+=v;
        vector<int> sri(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            sri[i]=abs(leftsum-(t-leftsum-nums[i]));
            leftsum+=nums[i];
        } 
        return sri;      
    }
};