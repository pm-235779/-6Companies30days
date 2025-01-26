class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq; 
        int left = 0, right = 0;    
        int maxLength = 0;            

        while (right < nums.size()) {
            freq[nums[right]]++;  
            
            while (freq[nums[right]] > k) {
                freq[nums[left]]--;  
                if (freq[nums[left]] == 0) {
                    freq.erase(nums[left]);  
                }
                left++;  
            }
            
            maxLength = max(maxLength, right - left + 1);
            right++;
        }
        
        return maxLength; 
    }
};
