class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> cnt; 
        for(auto num: nums) {
            cnt[num] += 1;
        }
        vector<int> res;
        for(int i = 0; i < k; i++) {
            int largest = -1;
            int element = -1;
            for(const auto &[first, second]: cnt) {
                if(largest < second) {
                    largest = second;
                    element = first;
                }
            }
            cnt[element] = -1;
            res.push_back(element);
        }
        return res;
    }
};
