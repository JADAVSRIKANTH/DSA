class Solution(object):
    def mostFrequentEven(self, nums):
        d={}
        m=-1
        ans=-1
        for n in nums:
            if(n%2==0):
                d[n]=d.get(n,0)+1
                if(d[n]>m or (d[n]==m and n<ans)):
                    m=d[n]
                    ans=n
        return ans
                
        