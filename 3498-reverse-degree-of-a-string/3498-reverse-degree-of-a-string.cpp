class Solution {
public:
    int reverseDegree(string s) {
      unordered_map<char,int> mp;
      mp['a']=26;
      mp['b']=25;
      mp['c']=24;
      mp['d']=23;
      mp['e']=22;
      mp['f']=21;
      mp['g']=20;
      mp['h']=19;
      mp['i']=18;
      mp['j']=17;
      mp['k']=16;
      mp['l']=15;
      mp['m']=14;
      mp['n']=13;
      mp['o']=12;
      mp['p']=11;
      mp['q']=10;
      mp['r']=9;
      mp['s']=8;
      mp['t']=7;
      mp['u']=6;
      mp['v']=5;
      mp['w']=4;
      mp['x']=3;
      mp['y']=2;
      mp['z']=1;
      int sum = 0;
      for(int i=0;i<s.size();i++){
          sum+=mp[s[i]]*(i+1);
      }

      return sum;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna