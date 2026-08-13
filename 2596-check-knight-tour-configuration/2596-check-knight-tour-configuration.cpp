class Solution {
public:
    bool isValid(vector<vector<int>>& grid,int i,int j,int n ,int expValue) {
        if(i<0||j<0||i>=n||j>=n||grid[i][j]!=expValue) return false;
        if(expValue==(n*n)-1) return true;
        int ans1=isValid(grid,i+2,j+1,n,expValue+1);
        int ans2=isValid(grid,i+2,j-1,n,expValue+1);
        int ans3=isValid(grid,i+1,j-2,n,expValue+1);
        int ans4=isValid(grid,i+1,j+2,n,expValue+1);
        int ans5=isValid(grid,i-1,j+2,n,expValue+1);
        int ans6=isValid(grid,i-1,j-2,n,expValue+1);
        int ans7=isValid(grid,i-2,j+1,n,expValue+1);
        int ans8=isValid(grid,i-2,j-1,n,expValue+1);
       return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        return isValid(grid,0,0,grid.size(),0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna