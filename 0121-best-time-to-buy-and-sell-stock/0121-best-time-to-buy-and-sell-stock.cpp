class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        vector<int>maxEl(prices.size());
        maxEl[prices.size()-1]=prices[prices.size()-1];
        for(int i=prices.size()-2;i>=0;i--){
            maxEl[i] = max(prices[i],maxEl[i+1]);
        }



        for(int i=0;i<prices.size();i++){
                int profit = maxEl[i]-prices[i];
                if(profit < 0)continue;
                 maxprofit = max(profit , maxprofit); 

        }
        return maxprofit;
    }
};