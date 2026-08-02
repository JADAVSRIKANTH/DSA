class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int t=0;
        int n=nums.size();
        for(int v:nums)
           t+=v;
        int leftsum=0;
        for(int i=0;i<n;i++)
        {
            int rightsum=t-leftsum-nums[i];
            if(leftsum==rightsum)
               return i;
            leftsum+=nums[i];
        }
        return -1;
    }
};