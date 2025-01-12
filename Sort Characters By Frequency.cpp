class Solution {
public:
    string frequencySort(string s) {
       string str = "";

         unordered_map<char, int> freq;
 for (char ch : s) {
        freq[ch]++;  
    }
    
   
 vector<pair<char, int>> freqVec(freq.begin(), freq.end());

   
    sort(freqVec.begin(), freqVec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second; 
    });

    for (const auto &pair : freqVec) {

        for(int i=0;i<pair.second;i++){
             str+=pair.first;
        }
       
    }
        return str;
    }
    
};
