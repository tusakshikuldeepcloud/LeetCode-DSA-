class Solution {
public:
    bool detectCapitalUse(string word) {

        bool allUpper = true;
        bool allLower = true;
        bool firstUpper = isupper(word[0]);

        for (char ch : word) {
            if (!isupper(ch))
                allUpper = false;

            if (!islower(ch))
                allLower = false;
        }

        if (allUpper || allLower)
            return true;

        if (firstUpper) {
            for (int i = 1; i < word.size(); i++) {
                if (isupper(word[i]))
                    return false;
            }
            return true;
        }

        return false;
    }
};
