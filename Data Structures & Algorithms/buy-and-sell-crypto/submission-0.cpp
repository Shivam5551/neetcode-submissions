class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int lowest = INT_MAX;
       int profit = -1;
       for(auto price: prices) {
        lowest = min(price, lowest);
        profit = max(profit, price-lowest);
       }
       return profit;
    }
};
