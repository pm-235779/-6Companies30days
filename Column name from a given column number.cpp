class Solution {
public:
    string convertToTitle(int n) {
    

    string result = ""; // To store the result in base-26

    while (n > 0) {
        int remainder = (n - 1) % 26; // Subtract 1 to make it zero-based
        char letter = 'A' + remainder; // Map remainder to A-Z
        result = letter + result; // Prepend the letter
        n = (n - 1) / 26; // Adjust n for the next iteration
    }

    return result;
    }
};
