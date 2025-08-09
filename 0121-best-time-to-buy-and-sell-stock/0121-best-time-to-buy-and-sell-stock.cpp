class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int bestbuy=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]>bestbuy){
            mp=max(mp,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return mp;
    }
};