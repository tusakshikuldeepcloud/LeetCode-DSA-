class Solution {
public:
    char findTheDifference(string s, string t) {

        vector<int> freq(26, 0);

        // Count characters of t
        for (char ch : t) {
            freq[ch - 'a']++;
        }

        // Remove characters of s
        for (char ch : s) {
            freq[ch - 'a']--;
        }

        // Find the extra character
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 1)
                return 'a' + i;
        }

        return ' ';
    }
};
