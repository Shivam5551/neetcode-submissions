class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(auto c: s) {
            if(c == '{' || c == '[' || c == '(' ) 
                st.push(c);
            else if(c == '}' && !st.empty()) {
                char temp = st.top();
                st.pop();
                if(temp != '{') return false;
                else continue;
            }else if(c == ']' && !st.empty()) {
                char temp = st.top();
                st.pop();
                if(temp != '[') return false;
                else continue;
            }else if(c == ')' && !st.empty()) {
                char temp = st.top();
                st.pop();
                if(temp != '(') return false;
                else continue;
            }
            if(st.empty()) return false;
        }
        if(st.empty()) return true;
        return false;
    }
};
