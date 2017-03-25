class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> iset(nums.cbegin(),nums.cend());
        return iset.size()<nums.size();
    }
};
