class Solution(object):
    def findGCD(self, nums):
        a=max(nums)
        b=min(nums)
        while(b!=0):
            t=b
            b=a%b
            a=t
        return a
        