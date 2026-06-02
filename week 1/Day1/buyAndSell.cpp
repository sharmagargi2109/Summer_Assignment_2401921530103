class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cp = prices[0];
        int maxProfit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<cp)
            {
                cp = prices[i];
            }
            int profit= prices[i]-cp;
            if(profit > maxProfit)
            {
                maxProfit = profit;
            
            }

        }
     return maxProfit;  
        
    }
     
};