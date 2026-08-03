class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map <char, int> m;
        for(auto it: s) {
            m[it] += 1;
        }
        for(auto it: t) {
           if(--m[it] < 0) {
            return false;
           }
        }
        return true;
    }
};
