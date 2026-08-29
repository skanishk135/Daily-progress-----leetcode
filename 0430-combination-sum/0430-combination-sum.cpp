class Solution {
public:
    void findSum(int index,int target,vector<int>& candidates,vector<vector<int>>& ans,vector<int>& path){
         if(target==0){
            ans.push_back(path);
            return;
        }
        if(target<0||index==candidates.size()){
            return;
        }
       
          path.push_back(candidates[index]);
          findSum(index,target - candidates[index],candidates,ans,path);
          path.pop_back();
          findSum(index+1,target,candidates,ans,path);
        }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> path;
        findSum(0,target,candidates,ans,path);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna