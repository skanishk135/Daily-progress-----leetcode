class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int area;
        int r=0,l=height.size()-1;
        while(r<l){
            int w=l-r;
            int ht=min(height[r],height[l]);
             area = w*ht;
             ans = max(ans,area);
            height[r]>height[l]?l--:r++;

        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna