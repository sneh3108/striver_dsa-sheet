class Solution {
public:
  int maxProfit(vector<int>& prices) {
    int mintill=prices[0];
    int maxprofit=0;
    for(int i=0;i<prices.size();i++){
      mintill=min(prices[i],mintill);
      int profit=prices[i]-mintill;
      maxprofit=max(maxprofit,profit);
    }
    return maxprofit;
 }
};
