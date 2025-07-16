class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        const int MOD = 1e9 + 7;
        unordered_map<int, long> freq;

        for (int num : arr)
            freq[num]++;

        long result = 0;

        // Iterate through all combinations (x, y, z) such that x <= y <= z
        for (auto& [x, cx] : freq) {
            for (auto& [y, cy] : freq) {
                int z = target - x - y;
                if (!freq.count(z)) continue;

                // Now make sure x <= y <= z
                if (x == y && y == z) {
                    // All same: C(n, 3)
                    result += (cx * (cx - 1) * (cx - 2)) / 6;
                } else if (x == y && y != z) {
                    // x == y != z: C(cx,2) * freq[z]
                    result += ((cx * (cx - 1)) / 2) * freq[z];
                } else if (x < y && y < z) {
                    // All different
                    result += cx * cy * freq[z];
                }
                result %= MOD;
            }
        }

        return result;
    }
};
