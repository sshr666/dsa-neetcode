class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int out=0,big=0,smol=prices[0];

        for (int i = 1; i < prices.size(); i++)
        {
            smol=min(smol,prices[i]);
            if(prices[i]-smol>out)
                out=prices[i]-smol;
        }

        return out;
        
    }
};
