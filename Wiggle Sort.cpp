class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int cnt = 0, ans = 0;
        int left = 0, oddCount = 0;

        for (int right = 0; right < nums.size(); ++right) {
        
            if (nums[right] % 2 == 1) {
                oddCount++;
                cnt = 0; 
            }

            while (oddCount == k) {
                cnt++;
                if (nums[left] % 2 == 1) oddCount--;
                left++;
            }

            ans += cnt; 
        }

        return ans;
    }
};
