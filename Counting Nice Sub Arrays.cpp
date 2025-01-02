class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int cnt = 0, ans = 0;
        int left = 0, oddCount = 0;

        for (int right = 0; right < nums.size(); ++right) {
            // Count odd numbers in the current window
            if (nums[right] % 2 == 1) {
                oddCount++;
                cnt = 0; // Reset the count for subarrays
            }

            // If there are `k` odd numbers, count valid subarrays
            while (oddCount == k) {
                cnt++;
                if (nums[left] % 2 == 1) oddCount--;
                left++;
            }

            ans += cnt; // Add valid subarrays ending at the current `right`
        }

        return ans;
    }
};
