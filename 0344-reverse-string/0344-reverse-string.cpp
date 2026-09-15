class Solution {
public:
    void reverseString(vector<char>& s) {
        int strt=0;
        int end=s.size()-1;
        while(strt<end){
            swap(s[strt],s[end]);
            strt++;
            end--;
        }
      
     
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna