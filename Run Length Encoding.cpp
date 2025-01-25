class Solution {
public:
    string encode(string s) {
        int cnt = 1;
        string ans = ""; 

        if (s.length() == 1) { 
            ans += s[0];
            ans += '1';
            return ans;
        }


        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) { 
                cnt++;
            } else {
                ans += s[i - 1]; 
                ans += to_string(cnt);
                cnt = 1; 
            }
        }

        ans += s[s.length() - 1];
        ans += to_string(cnt);

        return ans;
    }
};
