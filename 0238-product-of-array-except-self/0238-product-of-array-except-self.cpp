class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        for (int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
            }
             int suffix=1;
        for(int i=n-2;i>=0;i--){
             suffix *= nums[i+1];
            ans[i] *= suffix;
        }
        return ans;             
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna