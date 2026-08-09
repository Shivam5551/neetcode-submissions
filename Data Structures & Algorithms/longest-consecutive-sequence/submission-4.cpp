class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int current = 0;
        int longest = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i-1] == nums[i]) continue;
            if(nums[i-1] == (nums[i] - 1)) {
                current++;
            }
            else current = 0;
            longest = max(longest, current);
        }

        return longest+1;
    }
};
