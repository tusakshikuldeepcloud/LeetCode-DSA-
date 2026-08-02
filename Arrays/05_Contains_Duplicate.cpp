class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {unordered_set<int> s;

        for (int num : nums) {

            if (s.find(num) != s.end()) {
                return true;
            }

            s.insert(num);
        }

        return false;  
    }
};
