class Solution {
public:
    void sum(vector<int>& candidates,int target,int idx,vector<vector<int>>&combi,vector<int>& ans){
        if(target==0){
            combi.push_back(ans);
            return;
        }
      for(int i=idx;i<candidates.size();i++){
       
       if(i>idx && candidates[i]==candidates[i-1]){
         continue;
       }
        if(candidates[i]>target){
            break;
        }
        ans.push_back(candidates[i]);
        sum(candidates,target-candidates[i],i+1,combi,ans);
        ans.pop_back();
      }
       
       
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) { 
    vector<vector<int>>combi;
    vector<int> ans;
       sort(candidates.begin(),candidates.end());
       sum(candidates,target,0,combi,ans);
       return combi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna