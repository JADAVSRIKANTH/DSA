class Solution {
    public int countPrimes(int n) {
        int sri=0;
        boolean v[]=new boolean[n];
        if(n>2)
          v[2]=true;
        for(int i=2;i<n;i++)
        {
            v[i]=true;
        }
        for(int k=2;k*k<n;k++)
        {
            for(int j=k*k;j<n;j=j+k)
            {
                v[j]=false;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v[i])
             sri=sri+1;
        }
        return sri;
    }
}