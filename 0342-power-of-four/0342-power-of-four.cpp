class Solution {
public:
    bool powercheck(int n) {
        if (n == 1) {
            return true;
        }

        if (n <= 0 || n % 4 != 0) {
            return false;
        }

        return powercheck(n / 4);
    }

    bool isPowerOfFour(int n) {
        return powercheck(n);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna