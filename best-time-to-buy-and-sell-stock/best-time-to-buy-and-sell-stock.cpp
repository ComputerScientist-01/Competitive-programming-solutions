class Solution {
public:
       int maxProfit(vector<int>& prices) {
        if(prices.size()<2)
            return 0;
        int left=0;
        int right=1;
        int res=0;
        while(right<prices.size()){
            res=max(res,prices[right]-prices[left]);
            if(prices[left]>prices[right])
                left=right;
            right++;
        }
        return res;
    }
};