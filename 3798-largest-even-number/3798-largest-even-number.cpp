class Solution {
public:
    string largestEven(string s) {
        string ans;
        for(int k=s.size()-1;k>=0;k--)
        {
            if(s[k]=='2')
            {
             ans=s.substr(0,k+1);
             break;
            }
        }
        return ans;
    }
};