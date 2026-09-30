class Solution {
public:
    int firstUniqChar(string s) {
        
        int count[26] = {0};

        // Count each character
        for (char c : s) {
            count[c - 'a']++;
        }

        // Find the first character with count 1
        for (int i = 0; i < s.size(); i++) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};