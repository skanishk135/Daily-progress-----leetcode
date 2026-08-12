class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> freq;
        freq[0]=1;
        int sum=0;
        int count=0;
        for(int x:nums){
           sum+=x;
           if(freq.find(sum-goal)!=freq.end()){
               count+=freq[sum-goal];
           }
           freq[sum]++;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna