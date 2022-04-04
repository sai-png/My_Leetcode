class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0,b=0,s=0;
        int i=0;
        while(i<prices.size()-1){
            while(i<prices.size()-1 && prices[i] >= prices[i+1]){
                b = i+1;
                i++;
            }
            while(i<prices.size()-1 && prices[i] < prices[i+1]){
                s = i+1;
                i++;
            }
            if(b<s)
            p += prices[s]-prices[b];
        }
        return p;
    }
};