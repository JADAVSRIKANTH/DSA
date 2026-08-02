class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t=0;
        int v=nums.size();
        int leftsum=0;
        for(int i=0;i<v;i++)
          t+=nums[i];
        for(int i=0;i<v;i++)
        {
            int rightsum=t-leftsum-nums[i];
            if(rightsum==leftsum)
              return i;
            leftsum+=nums[i];
        }
        return -1;
    }
};