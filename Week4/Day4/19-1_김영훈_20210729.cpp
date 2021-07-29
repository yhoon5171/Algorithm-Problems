//https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> alpha;
        int max = 0;
        int cnt = 0;

        for (int i = 0; i < s.length(); i++){
            if (alpha.find(s.at(i)) != alpha.end()){
                if (max < cnt) max = cnt;
                int j = i - cnt;
                while (s.at(j) != s.at(i)){
                    alpha.erase(s.at(j));
                    j++;
                    cnt--;
                }
            }
            else{
                alpha.insert(make_pair(s.at(i), 1));
                cnt++;
            }
        }
        if (max < cnt) max = cnt;
        
        return max;
    }
};
