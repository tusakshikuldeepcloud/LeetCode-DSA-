class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        string word;

        // Split string into words
        stringstream ss(s);

        while (ss >> word) {
            words.push_back(word);
        }

        // Number of pattern characters and words must be same
        if (pattern.size() != words.size())
            return false;

        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < pattern.size(); i++) {

            char ch = pattern[i];
            string w = words[i];

            // Check char -> word mapping
            if (charToWord.count(ch)) {
                if (charToWord[ch] != w)
                    return false;
            }

            // Check word -> char mapping
            if (wordToChar.count(w)) {
                if (wordToChar[w] != ch)
                    return false;
            }

            // Create mapping
            charToWord[ch] = w;
            wordToChar[w] = ch;
        }

        return true;
    }
};
