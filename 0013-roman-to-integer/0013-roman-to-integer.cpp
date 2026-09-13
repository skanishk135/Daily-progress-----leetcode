class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        int sum=0;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['D']=500;
        mp['C']=100;
        mp['M']=1000;
       for(int i=0;i<s.size();i++){
          if(s[i]=='I'&& s[i+1]=='V'){
            sum+=4;
            i=i+1;
          }
          else if(s[i]=='C'&& s[i+1]=='M'){
            sum+=900;
            i=i+1;
          }
          else if(s[i]=='X'&& s[i+1]=='C'){
            sum+=90;
            i=i+1;
          }
         else if(s[i]=='I'&& s[i+1]=='X'){
            sum+=9;
            i=i+1;
          }
          else if(s[i]=='X'&& s[i+1]=='L'){
            sum+=40;
            i=i+1;
          }
          else if(s[i]=='C'&& s[i+1]=='D'){
            sum+=400;
            i=i+1;
          }
          else{
            sum += mp[s[i]];
          }
          
       }

      return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna