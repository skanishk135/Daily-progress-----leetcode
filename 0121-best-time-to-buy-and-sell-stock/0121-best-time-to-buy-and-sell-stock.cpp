class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int bestBuy=prices[0];
        for (int i=1;i<prices.size();i++){
            if(prices[i] > bestBuy){
                maxp=max(maxp,prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy,prices[i]);
        }
        
        return maxp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna