class Solution {
    public static double virat(double a,int n)
    {
        if(n==0)
           return 1;
        double p=virat(a,n/2);
        if(n%2!=0)
          return p*p*a;
        else
           return p*p;
    }
    public double myPow(double x, int n) {
         double r=virat(x,Math.abs(n));
        if(n<0)
          return (1/r);
        return r;  
    }
}