class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> set1;
        unordered_set<int> result;

        // Store nums1 elements
        for (int num : nums1) {
            set1.insert(num);
        }

        // Check nums2 elements
        for (int num : nums2) {
            if (set1.count(num)) {
                result.insert(num);
            }
        }

        // Convert set to vector
        vector<int> ans;

        for (int num : result) {
            ans.push_back(num);
        }

        return ans;
    }
};
