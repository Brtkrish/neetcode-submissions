class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l,r,maxi=0;
        l=0;
        r=1;
        while(r<prices.size())
        {
            if(prices[l]>prices[r])
            {
                l=r;
                r++;
            }
            else 
            {
                maxi=max(maxi,prices[r]-prices[l]);
                r++;
            }
            
        }
        return maxi;
    }
};
