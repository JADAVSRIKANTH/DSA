class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int s=accumulate(nums.begin(),nums.end(),0);
        if(s%2!=0)
         return false;
        int target=s/2;
        vector<bool> dp(target+1,false);
        dp[0]=true;
        for(int num: nums)
        {
            for(int j=target;j>=num;j--)
            {
                dp[j]=dp[j]||dp[j-num];
            }
        }
        return dp[target];
    }
};