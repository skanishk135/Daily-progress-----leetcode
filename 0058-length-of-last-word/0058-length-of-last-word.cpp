class Solution {
public:
    int lengthOfLastWord(string s) {
        int i= s.length()-1;
        int count = 0;
     while(i>=0 && s[i]==' '){
        i--;
     }
     while(i>=0 && s[i]!=' '){
        i--;
        count++;
     }
       return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna