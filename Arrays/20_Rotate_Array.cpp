class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      int n = nums.size();
        k = k % n;

        vector<int> temp;

        // Store last k elements
        for (int i = n - k; i < n; i++) {
            temp.push_back(nums[i]);
        }

        // Store remaining elements
        for (int i = 0; i < n - k; i++) {
            temp.push_back(nums[i]);
        }

        // Copy back to original array
        nums = temp;  
    }
};
