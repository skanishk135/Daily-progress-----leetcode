class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
           int i=0; 
           for (int j=i+1;j<nums.size();j++){       
            if(nums[j]!=nums[i]){
                  i++;
                nums[i]=nums[j];
          }
       }
    return i+1;
}


};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna