class Solution {
public:
    int maxProduct(string s) {
        int N = s.length();
        unordered_map<int, int> pali; 

        for (int mask = 1; mask < (1 << N); ++mask) {
            string subseq = "";
            for (int i = 0; i < N; ++i) {
                if (mask & (1 << i)) {
                    subseq += s[i];
                }
            }

            if (subseq == string(subseq.rbegin(), subseq.rend())) {
                pali[mask] = subseq.size();
            }
        }

        int res = 0;

        for (const auto& [m1, len1] : pali) {
            for (const auto& [m2, len2] : pali) {
                if ((m1 & m2) == 0) { 
                    res = max(res, len1 * len2);
                }
            }
        }

        return res;
    }
};
