class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if len(prices)<=1:
            return 0
        buy_prices = prices[0]
        max_profit = 0
        for i in range(1,len(prices)):
            buy_prices = min(prices[i],buy_prices)
            max_profit = max(prices[i]-buy_prices,max_profit)
        return max_profit
