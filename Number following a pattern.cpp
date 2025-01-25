class Solution {
public:
    string printMinNumberForPattern(string S) {
        stack<int> st;
        string result = "";
        int n = S.length();
        
        for (int i = 0; i <= n; ++i) {
            st.push(i + 1);  
            
            if (i == n || S[i] == 'I') {
                while (!st.empty()) {
                    result += to_string(st.top());
                    st.pop();
                }
            }
        }
        
        return result;
    }
};
