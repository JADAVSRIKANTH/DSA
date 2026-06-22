class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int s=accumulate(nums.begin(),nums.end(),0);
        if(s%2==0)
         return true;
        return false;
        
    }
};