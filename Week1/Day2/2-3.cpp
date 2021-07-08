//https://leetcode.com/problems/longest-common-prefix/
//평가: 1

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        char tmp_prefix = '?';
        int cnt = 0;

        if (find(strs.begin(), strs.end(), "") != strs.end()){
            return prefix;
        }
        if (strs.size() < 2){
            prefix = strs[0];
            return prefix;
        }   

        for (int i = 0; i < 200; i++){
            cnt = 0;
            tmp_prefix = '?'; 
            for (int j = 0; j < strs.size(); j++){
                if (strs[j].length() <= i){
                    return prefix;
                }
                tmp_prefix = strs[0].at(i);
                if (strs[j].at(i) == tmp_prefix){
                    cnt++;
                }
            }
            if (cnt == strs.size()) prefix.append(1, strs[0].at(i));
            else break;
        }
        return prefix;
    }
};
