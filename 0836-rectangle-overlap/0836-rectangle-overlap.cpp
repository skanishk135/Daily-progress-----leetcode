class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1 = rec1[0];  
        int y1 = rec1[1];
        int x2 = rec1[2];
        int y2 = rec1[3];
        int s1 = rec2[0];  
        int t1 = rec2[1];
        int s2 = rec2[2];
        int t2 = rec2[3];
     if(t2<=y1||t1>=y2){
        return false;
     }else if(s2<=x1||s1>=x2){
         return false;
     }else{
        return true;
     }

        

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna