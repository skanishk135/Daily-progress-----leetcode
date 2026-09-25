class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++) {

           
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            for (int j = i + 1; j < n - 2; j++) {

                
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int p = j + 1;
                int q = n - 1;

                while (p < q) {

                    long long sum = 1LL * nums[i] +
                                    nums[j] +
                                    nums[p] +
                                    nums[q];

                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[p], nums[q]});

                        p++;
                        q--;

                        while (p < q && nums[p] == nums[p - 1])
                            p++;

                        
                        while (p < q && nums[q] == nums[q + 1])
                            q--;
                    }
                    else if (sum < target) {
                        p++;
                    }
                    else {
                        q--;
                    }
                }
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna