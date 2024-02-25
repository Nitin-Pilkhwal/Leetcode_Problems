class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0
        )));
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                for(int limit=1;limit<=2;limit++){
                    int profit=0;
                    if(buy){
                        int buykar = -prices[i] + dp[i+1][0][limit];
                        int rhenede1 = dp[i+1][1][limit];
                        profit = max(buykar,rhenede1);
                    }else{
                        int sellkar = prices[i] + dp[i+1][1][limit-1];
                        int rhenede2 = dp[i+1][0][limit];
                        profit = max(rhenede2,sellkar);
                    }
                    dp[i][buy][limit]=profit;
                }
            }
        }
        return dp[0][1][2];
    }
};