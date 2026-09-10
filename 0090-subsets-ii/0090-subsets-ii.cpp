class Solution {
public:
    void printSubset(vector<int>& nums, vector<vector<int>>&allsubset,int i,vector<int>& ans){
        if (i==nums.size()){
            allsubset.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        printSubset(nums,allsubset,i+1,ans);
        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size()&&nums[idx]==nums[idx-1]) idx++;
        printSubset(nums,allsubset,idx,ans);

        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allsubset;
        vector<int>ans;
        
        printSubset(nums,allsubset,0,ans);
        return allsubset;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna