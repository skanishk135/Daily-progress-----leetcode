class Solution {
public:
    bool isPowerOfTwo(int n) {
            if(n<1){
             return false;
            }
            if(n==1){
                return true;
            }
            if(n%2==0){
              return  isPowerOfTwo(n/2);
            }
            
            return false;
            
    }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna