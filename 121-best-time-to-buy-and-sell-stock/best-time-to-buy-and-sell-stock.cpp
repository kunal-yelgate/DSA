class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = 0;
        int buying = prices[0];

        for(int i = 0; i < prices.size() ; i++) {
            if( buying > prices[i]) {
                buying = prices[i];
            }
            price = max(price, (prices[i] - buying));
        }
        return price; 
    }
};