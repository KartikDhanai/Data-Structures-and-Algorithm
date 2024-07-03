class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
     vector<int> pref(n);
     vector<int> ans(n);
     pref[0] = 1;
    for(int i=1; i<n;i++){
        pref[i] = nums[i-1] * pref[i-1];
    }
     int suff = 1;
    for(int i=n-1;i>=0;i--){
        ans[i] = pref[i] * suff;
        suff= suff*nums[i];
    }
    return ans;
    }
