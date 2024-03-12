class Solution {
    public int maxProfit(int[] prices) {
        int min = prices[0]; // Initialize the minimum price to the first element of the array
        int profit = 0; // Initialize the maximum profit to 0

        // Iterate through the array
        for(int i = 0; i < prices.length; i++) {
            // If the current price is less than the minimum price seen so far, update the minimum price
            if(prices[i] < min) {
                min = prices[i];
            }

            // Calculate the profit if we sell the stock on the current day
            // and update the maximum profit if needed
            profit = Math.max(profit, prices[i] - min);
        }

        return profit; // Return the maximum profit
    }
}