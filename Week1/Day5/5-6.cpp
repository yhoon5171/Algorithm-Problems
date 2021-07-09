class Solution {
public:
    bool isPalindrome(string s) {
            string tmp;
        int i;

        for (i = 0; i < s.length(); i++){
            if (s.at(i) > 64 && s.at(i) < 91)
                s.at(i) += 32;
            else if (s.at(i) < 97 || s.at(i) > 122){
                if (s.at(i) < 48 || s.at(i) > 57){
                    s.erase(s.begin() + i);
                    i -= 1;
                }
            }
        }

        for (i = s.length() - 1; i >= 0; i--){
            tmp.push_back(s.at(i));
        }

        if (tmp == s) return true;
        else return false;
    }
};