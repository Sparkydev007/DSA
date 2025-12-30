class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);
        int j = 0;

        // First pass: collect all non-zero elements
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                result[j++] = nums[i];
            }
        }

        // Copy back to original array
        for (int i = 0; i < n; i++) {
            nums[i] = result[i];
        }
    }
};

//Arrays 30-12-25