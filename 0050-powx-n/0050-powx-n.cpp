class Solution {
public:
    double myPow(double x, int n){
       
       if (n==0) return 1.00;
       if(n==1) return x;
       if(x==0) return 0;
       if(x==-1 && n%2==0) return 1;
        if(x==-1 && n%2==1) return -1;

     long long binform = n;

       if(binform<0){
        x=1/x;
        binform=-binform;
       }
       double ans = 1.0;
       while(binform>0){
        if(binform%2==1){
            ans*=x;
        }
        x*=x;
       binform/=2;

       }
       return ans;
       }
    };

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna