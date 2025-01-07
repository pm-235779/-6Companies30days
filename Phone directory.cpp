class Solution {
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s) {
        string str = "";
        vector<vector<string>> ans;

        for (int i = 0; i < s.length(); i++) {
            str += s[i];
            vector<string> ans1;
            set<string> uniqueContacts; // To handle duplicate entries

            for (int j = 0; j < n; j++) {
                // Check if `contact[j]` starts with `str`
                if (contact[j].substr(0, str.length()) == str) {
                    uniqueContacts.insert(contact[j]); // Add unique contact
                }
            }

            if (uniqueContacts.empty()) {
                ans.push_back({"0"}); // No match found
            } else {
                ans1.assign(uniqueContacts.begin(), uniqueContacts.end());
                ans.push_back(ans1); // Add matching contacts
            }
        }

        return ans;
    }
};
