class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }

    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;

        while (start < end) {
            if (!isVowel(s[start])) {
                start++;
            } else if (!isVowel(s[end])) {
                end--;
            } else {
                // both are vowels, so swap
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
        }

        return s;
    }
};
