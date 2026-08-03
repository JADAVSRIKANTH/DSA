class Solution {
public:
    void virat(vector<int>& nums,int index,vector<int>& subset,vector<vector<int>>& sri)
    {
         sri.push_back(subset);
         for(int i=index;i<nums.size();i++)
         {
            if(i>index && nums[i]==nums[i-1])
               continue;
            subset.push_back(nums[i]);
            virat(nums,i+1,subset,sri);
            subset.pop_back();
            //virat(nums,i+1,subset,sri);
         }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> subset;
        vector<vector<int>> sri;
        virat(nums,0,subset,sri);
        return sri;    
    }
};