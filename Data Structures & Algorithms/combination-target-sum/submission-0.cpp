class Solution {
public:
    void findComb(int index, int target, vector<int> &current, 
    vector<int> &nums, vector<vector<int>> &res) {
        if(target == 0) {
            res.push_back(current);
            return;
        }
        if(target < 0 || index >= nums.size() || target < nums[index]) return;
        // take
        current.push_back(nums[index]);
        findComb(index, target-nums[index], current, nums, res);
        // not take
        current.pop_back();
        findComb(index+1, target, current, nums, res);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> current;
        findComb(0, target, current, nums, res);
        return res;
    }
};
