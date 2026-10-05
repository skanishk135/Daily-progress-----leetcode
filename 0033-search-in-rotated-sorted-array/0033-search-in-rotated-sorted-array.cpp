class Solution {
public:
    int search(vector<int>& nums, int target) {
        int strt = 0;
        int end = nums.size() - 1;

        while (strt <= end) {
            int mid = strt + (end - strt) / 2;

            if (nums[mid] == target) {
                return mid;
            }

        
            if (nums[strt] <= nums[mid]) {
                if (target >= nums[strt] && target < nums[mid]) {
                    end = mid - 1;
                } else {
                    strt = mid + 1;
                }
            }
           
            else {
                if (target > nums[mid] && target <= nums[end]) {
                    strt = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna