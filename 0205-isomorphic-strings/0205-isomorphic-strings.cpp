class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
         unordered_map<char, char> revmp;

        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            if (mp.count(s[i]) && mp[s[i]] != t[i]) {
                return false;
            } 
            if(revmp.count(t[i]) && revmp[t[i]]!=s[i]){
                 return false;
            }
         
                revmp[t[i]]=s[i];
                mp[s[i]] = t[i];
            
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna