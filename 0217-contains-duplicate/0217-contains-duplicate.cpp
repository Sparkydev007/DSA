class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std :: unordered_set<int> arya;

        for(int num : nums){
            if (arya.contains(num)){
                return true;
            }

            arya.insert(num);
        }

        return false;
    }
};