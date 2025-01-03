
class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int result = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
               
                vector<int> temp;
                for (int k = 0; k < n; k++) {
                    if (k < i || k > j) {
                        temp.push_back(nums[k]);
                    }
                }

                bool isStrictlyIncreasing = true;
                for (int k = 1; k < temp.size(); k++) {
                    if (temp[k] <= temp[k - 1]) {
                        isStrictlyIncreasing = false;
                        break;
                    }
                }

                if (isStrictlyIncreasing) {
                    result++;
                }
            }
        }

        return result;
    }
};

