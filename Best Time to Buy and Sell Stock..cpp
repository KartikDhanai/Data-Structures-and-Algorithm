class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = prices[0];
        int n = prices.size();
        int ans=0;
        for(int i=1; i<n ;i++){
            int prof = prices[i] - minn;
            minn = min(minn , prices[i]);
            ans = max(ans, prof); 
        }
        return ans;
    }
};
