class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        int r=0;int c=n-1;
        while(r<m && c>=0){
        int mid=mat[r][c];
        if(target==mid){
            return true;
        }
       else if(target<mid){
             c--;
        }
        else{
            r++;
        }
        
        }
        return false;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna