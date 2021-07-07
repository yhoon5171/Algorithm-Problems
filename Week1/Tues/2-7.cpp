//https://leetcode.com/problems/backspace-string-compare/
//평가: 1

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        //for s string
        for (int i = 0; i < s.length(); i++){
            if (s.at(i) == '#'){
                if (i -1 != -1){
                    s.erase(s.begin() + i);
                    s.erase(s.begin() + i - 1);
                    i = -1;
                }
                else{
                    s.erase(s.begin() + i);
                    i = -1;
                }
            }
        }

        //for t string
        for (int i = 0; i < t.length(); i++){
            if (t.at(i) == '#'){
                if (i -1 != -1){
                    t.erase(t.begin() + i);
                    t.erase(t.begin() + i - 1);
                    i = -1;
                }
                else{
                    t.erase(t.begin() + i);
                    i = -1;
                }
            }
        }
        if (s == t) return true;
        else return false;
    }
};
