class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        dp=[0]*(len(cost))
        dp[0:2]=cost[0:2]
        for i in range(2,len(cost)):
            dp[i]=min(dp[i-1]+cost[i], dp[i-2]+cost[i])
        return min(dp[-2],dp[-1])