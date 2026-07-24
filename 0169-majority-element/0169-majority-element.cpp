class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counter;
        int treshold = nums.size()/2;
        for (int num : nums){
            counter[num]++;

            if(counter[num]>treshold) {
                return num;
            }
        }
        return -1;
    }
};