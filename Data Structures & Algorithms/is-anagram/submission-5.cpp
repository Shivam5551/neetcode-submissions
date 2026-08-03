class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map <char, int> m;
        for(auto it: s) {
            auto i = m.find(it);
            if(i == m.end()) {
                m[it] = 0;
            }
            m[it] += 1;
        }
        for(auto it: t) {
            auto i = m.find(it);
            if(i != m.end()) {
                m[it] -= 1;
                if(m[it] < 0) {
                    return false;
                }
            }else return false;
        }
        return true;
    }
};
