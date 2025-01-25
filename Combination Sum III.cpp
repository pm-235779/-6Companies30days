class Solution {
public:
    vector<vector<int>> ans;

    void f(int i , int k ,int n , vector<int>& temp, int sum) {
        // Base cases
        if (sum > n) return;  
        if (k == 0) {
            if (sum == n) {    
                ans.push_back(temp);
            }
            return;
        }
        
        for (int j = i; j <= 9; ++j) {
            temp.push_back(j);          
            f(j + 1, k - 1, n, temp, sum + j); 
            temp.pop_back();        
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        f(1, k, n, temp, 0);  
        return ans;
    }
};
