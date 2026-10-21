class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length()!=goal.length()){
            return false;
        }
        string sn = s+s;
        if (sn.find(goal)!=string::npos){
            return true;
        }
        else { return false;}
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna