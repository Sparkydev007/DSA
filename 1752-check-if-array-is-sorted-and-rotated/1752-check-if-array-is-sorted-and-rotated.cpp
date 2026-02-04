class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count_breaks = 0;

        for (int i = 0; i < n; i++) {
            
            if (nums[i] > nums[(i+1) % n]) {
                count_breaks++;
            }
        }

        
        return count_breaks <= 1;
    }
};
