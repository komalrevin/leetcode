class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int bestending = nums[0];
        int ans = nums[0];
        for(int i=1; i<n; i++){
            int val_1 = nums[i];
            int val_2 = nums[i] + bestending;
            bestending = max(val_1,val_2);
            ans = max(ans , bestending);
        }
    return ans;
    }
};