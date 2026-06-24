class Solution(object):
    def numTrees(self, n):
        def fact(n):
            f=1
            for i in range(1,n+1):
                f=f*i
            return f
        return ((fact(2*n))/(fact(n+1)*fact(n)))
        