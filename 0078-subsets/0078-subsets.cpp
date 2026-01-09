class Solution {
public:
    void virat(vector<int>& nums,int index,vector<int>& subset,vector<vector<int>>& ans)
    {
        if(index==nums.size())
        {
          ans.push_back(subset);
          return;
        }
        subset.push_back(nums[index]);
        virat(nums,index+1,subset,ans);
        subset.pop_back();
        virat(nums,index+1,subset,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        virat(nums,0,subset,ans);
        return ans;   
    }
};