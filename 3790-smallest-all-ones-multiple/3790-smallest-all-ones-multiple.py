class Solution:
    def minAllOneMultiple(self, k: int) -> int:
        t=k
        if(t%2==0 or t%5==0):
            return -1
        r=1%t
        l=1
        while(l<=t):
            if(r==0):
                return l
            r=(r*10+1)%t
            l+=1
        return -1
        