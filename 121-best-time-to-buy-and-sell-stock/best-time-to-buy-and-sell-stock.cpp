class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit =0;
        int n = prices.size();
        int j =0;
        
        for(int i= 1; i< n;i++){
            if(prices[i] > prices[j]){
                int Profit = prices[i] - prices[j];
                maxProfit = max(maxProfit,Profit);
                
            }else if(prices[i] < prices[j]){
                j = i;
            }

            }
        return maxProfit;
    }
    
};