class Solution {
public:
    int reverse(int x) {
        int revint=0;
        while(x!=0){
        
          int dig = x%10;
          if(revint>INT_MAX/10 || revint<INT_MIN/10){
            return 0;
          }
          revint=revint*10+dig;
           x=x/10;
        }
       return revint;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna