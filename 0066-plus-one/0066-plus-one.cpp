class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        int zeros=0;
         if(digits[n]<9){
            digits[n]++;
            return digits;
         }
         if(digits[n]==9){
          for(int i=n;i>=0;i--){
            if(digits[i]==9){
                digits[i]=0;
                zeros++;
            }
            else if(digits[i]<9){
                digits[i]++;
                break;
            }
              
        }
        if(zeros==digits.size()){
            digits[0]=1;
            digits.push_back(0);
        }
         
       

           
         }
        
        return digits;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna