#include<vector>
class Solution {
public:
    int getLucky(string s, int k) {
        string numStr = "";

        // Step 1: Convert each character to its alphabet position
        for(char ch : s) {
            int val = ch - 'a' + 1;
            numStr += to_string(val);  // Append digits as characters
        }

        // Step 2: Perform digit sum operation k times
        while(k--) {
            int sum = 0;
            for(char digit : numStr) {
                sum += digit - '0';
            }
            numStr = to_string(sum); // Convert back to string for next iteration
        }

        return stoi(numStr);
    }
};
