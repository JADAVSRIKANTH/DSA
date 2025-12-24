class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        inf=amount+1
        dp=[inf]*(amount+1)
        dp[0]=0
        for coin in coins:
            for i in range(coin,amount+1):
                dp[i]=min(dp[i],dp[i-coin]+1)
        return dp[amount] if dp[amount]!=inf else -1
        