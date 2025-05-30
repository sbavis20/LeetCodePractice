class Solution {
public:
    string reversePrefix(string word, char ch) {
        // Find the index of first occurrence of ch
        int idx = word.find(ch);

        // If ch is not found, return original word
        if (idx == string::npos) {
            return word;
        }

        // Reverse from 0 to idx
        reverse(word.begin(), word.begin() + idx + 1);

        return word;
    }
};
