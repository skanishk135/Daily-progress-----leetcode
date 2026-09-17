class Solution {
public:
    bool canJump(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int count=0;
            if(nums[i]==0){
             return false;
             break;
           }
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==0){
                    count++;
                }
            }
            if(nums[i]<=count){
                return false;
            }
            count=0;
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna