class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        unordered_set<int> s;
        int res=0;
        int l=nums.size();
        for(int i=0;i<l;i++)
            {
              unordered_set<int> s; 
              long long sum=0;
               for(int j=i;j<l;j++)
                   {
                       sum+=nums[j];
                       s.insert(nums[j]);
                       if(s.count(sum))
                       {
                           res+=1;
                       }
                   }
            }
        return res;
    }
};