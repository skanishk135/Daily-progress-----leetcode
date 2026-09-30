class Solution {
public:
    int minElement(vector<int>& nums) {
        int result=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int x=0;
            while(nums[i]>0){
               x += nums[i]%10;
                nums[i]/=10;
            }     
            result=min(result,x);
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna