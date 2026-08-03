class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> cnt; 
        for(auto num: nums) {
            cnt[num] += 1;
        }
        vector<int> res;
        // for(int i = 0; i < k; i++) {
        //     int largest = -1;
        //     int element = -1;
        //     for(const auto &[first, second]: cnt) {
        //         if(largest < second) {
        //             largest = second;
        //             element = first;
        //         }
        //     }
        //     cnt.erase(element);
        //     res.push_back(element);
        // }
        vector<vector<int>> bucket (nums.size()+1);
        for(auto &[num, count]: cnt) {
            bucket[count].push_back(num);
        }
        for(int i = bucket.size()-1; i > 0 && res.size() < k;i--) {
            for(int n: bucket[i]) {
                res.push_back(n);
                if(res.size() == k) {
                    break;
                }
            }
        }
        return res;
    }
};
