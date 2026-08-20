class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        int count=0;
     sort(nums.begin(), nums.end());
    for(int i = n-1; i >= 0; i--) {
        if(i == n-1 || nums[i] != nums[i+1]) {
        count++;

        if(count == 3)
            return nums[i];
    }
}
        return nums[n-1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna