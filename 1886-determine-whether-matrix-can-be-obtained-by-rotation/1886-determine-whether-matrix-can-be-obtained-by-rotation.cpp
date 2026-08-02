class Solution {
public:
    void Rotate(vector<vector<int>>& mat, vector<vector<int>>& target)
    {
        int n=mat.size();
        for(int i=0;i<n;i++)  // for transpose,without duplicate swap pair
        {
            for(int j=i;j<n;j++)
               swap(mat[i][j],mat[j][i]);
        }
        for(int i=0;i<n;i++)   // reversing erch row
        {
            for(int j=0;j<n/2;j++)
              swap(mat[i][j],mat[i][n-j-1]);
        }  
    }

    bool sri(vector<vector<int>>& mat, vector<vector<int>>& target)
    {
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
              if(mat[i][j]!=target[i][j])
                 return false;
            }
               
        }
        return true;   
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) { 
        for(int i=0;i<4;i++)
        {
            if(sri(mat,target))
              return true;
            Rotate(mat, target);
        }
        return false;
    }

    
};