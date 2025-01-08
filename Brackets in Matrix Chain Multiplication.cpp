class Solution {
  public:
    string help(int i, int j, vector<vector<int>> &brackets) {
        if (i == j) {
            char a = 'A' + i - 1;
            string temp = "";
            temp += a;
            return temp;
        }
        return '(' + help(i, brackets[i][j], brackets) + help(brackets[i][j] + 1, j, brackets) + ')';
    }

    string matrixChainOrder(vector<int> &arr) {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        vector<vector<int>> brackets(n, vector<int>(n, 0));
        
        for (int i = 0; i < n; i++) dp[i][i] = 0;
        
        for (int len = 2; len < n; len++) {
            for (int i = 1; i < n - len + 1; i++) {
                int end = i + len - 1;
                for (int k = i; k < end; k++) {
                    int total = dp[i][k] + dp[k + 1][end] + arr[i - 1] * arr[k] * arr[end];
                    if (total < dp[i][end]) {
                        dp[i][end] = total;
                        brackets[i][end] = k;
                    }
                }
            }
        }
        return help(1, n - 1, brackets);
    }
};
