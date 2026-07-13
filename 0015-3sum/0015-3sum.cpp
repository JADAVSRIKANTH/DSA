class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
             continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int s=nums[i]+nums[j]+nums[k];
                if(s<0)
                   j++;
                else if(s>0)
                  k--;
                else
                {
                    vector<int> t={nums[i],nums[j],nums[k]};
                    v.push_back(t);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])
                      j++;
                    while(j<k && nums[k]==nums[k+1])
                      k--;
                }
            }
        }
        return v;
    }
};