class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,bool> mp;
      for(int i=0;i<nums.size();i++){
        mp[nums[i]]=true;
      }
      int j=1;
      while(j!=-1){
        if(mp[j*k]!=true){
          return j*k;
          break;
        }
        else{
            mp[j*k]==true;
            j++;
        }
      }
      
    return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna