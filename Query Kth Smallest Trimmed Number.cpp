class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int len = nums[0].length();

        for (const auto& query : queries) {
            int k = query[0];  
            int trim = query[1]; 

            priority_queue<pair<string, int>> pq;

            for (int i = 0; i < nums.size(); ++i) {
        
                string trimmed = nums[i].substr(len - trim);

                pq.push({trimmed, i});

                if (pq.size() > k) {
                    pq.pop();
                }
            }

            ans.push_back(pq.top().second);
        }

        return ans;
    }
};
