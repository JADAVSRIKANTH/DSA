class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> s=nums;
        vector<int> n;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=0)
                    n.push_back(nums[i]);
            }
        if(n.empty())
            return nums;
        k=k%(n.size());
        rotate(n.begin(),n.begin()+k,n.end());
        int j=0;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=0)
                    nums[i]=n[j++];
            }
        return nums;
    }
};