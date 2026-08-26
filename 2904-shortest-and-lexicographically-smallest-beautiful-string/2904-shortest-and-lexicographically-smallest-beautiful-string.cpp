class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        set<string> strs;

        int ones = 0;
        int left = 0;
        int minlen = INT_MAX;
        string ans="";

        for (int right = 0; right < s.size(); right++) {

            if (s[right] == '1') {
                ones++;
            }

            while (ones == k) {

                int len = right - left + 1;
           if(minlen>len||(len==minlen && s.substr(left,len)<ans)){
              ans=s.substr(left,len);
              minlen=len;
           }
               

                if (s[left] == '1') {
                    ones--;
                }

                left++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna