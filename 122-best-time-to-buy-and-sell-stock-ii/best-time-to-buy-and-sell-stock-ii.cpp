class Solution {
    
 int memoization(vector<int> &prices,vector<vector<int>> &dp,int n,int buy,int i){
    if(i==n) return 0;
    if(dp[i][buy]!=-1){
        return dp[i][buy];
    }
    int profit=0;
    if(buy){
        int buyKaro=-prices[i]+memoization(prices,dp,n,0,i+1);
        int skipKaro= 0 + memoization(prices,dp,n,1,i+1);
        profit=max(buyKaro,skipKaro);
    }
    else{
        int sellKaro= +prices[i]+memoization(prices,dp,n,1,i+1);
        int skipKaro= 0 + memoization(prices,dp,n,0,i+1);
        profit=max(sellKaro,skipKaro);
    }
    return dp[i][buy]=profit;

 }
    int stocks(vector<int> prices,int i,int buy,int n){
        if(i==n){
            return 0;
        }
        int profit=0;
        if(buy){
            profit=max( -prices[i]+stocks(prices,i+1,0,n),
                    0 + stocks(prices,i+1,1,n));
        }
        else{
            int sellKaro=prices[i]+stocks(prices,i+1,1,n);
            int skipKaro=0 + stocks(prices,i+1,0,n);
            profit=max(sellKaro,skipKaro);
        }
        return profit;
    }
public:
    int maxProfit(vector<int>& prices) {
        int buy=1;
        int i=0;
        int n=prices.size();
        // return stocks(prices,i,buy,n);
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return memoization(prices,dp,n,buy,i);
    }
};