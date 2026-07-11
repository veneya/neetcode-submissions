class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buyprice=prices[0];
        for(int i:prices){
            profit=max(profit,i-buyprice);
            buyprice=min(buyprice,i);
        }
        return profit;
    }
};
