class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> pairs;
        vector<int> res;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            auto it = pairs.find(nums[i]);
            if(it != pairs.end()) {
                res.push_back(min(i, it->second));
                res.push_back(max(i, it->second));
                return res;
            }
            pairs[target-nums[i]] = i;
        }
        return res;
    }
};
