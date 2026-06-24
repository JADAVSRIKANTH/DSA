class Solution {
public:
    int numTrees(int n) {
        double catalen=1;
        for(int i=1;i<=n;i++)
        {
            catalen*=4-(6.0/(i+1));
        }
        return (int) catalen;
    }
};