class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int>tab;

        for(int num : nums){
            if (tab.count(num)){
                return true;
            }

            tab.insert(num);
        }

        return false;
    }
};