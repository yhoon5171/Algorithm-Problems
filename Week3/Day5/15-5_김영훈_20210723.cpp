//https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int first = 0, second = 0;
        
        while(first < s.length() && second < t.length()){
            if (s.at(first) == t.at(second)){
                first++;
            }
            second++;
        }
        return first == s.length() ? true : false;
    }
};