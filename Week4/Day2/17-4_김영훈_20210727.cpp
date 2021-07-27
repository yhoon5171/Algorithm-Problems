//https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hash;

        for (int i = 0; i < s.length(); i++){
            char c = s.at(i);
            if (hash.find(c) != hash.end())
                hash[c]++;
            else
                hash.insert(make_pair(c, 1));
        }

        for (int i = 0; i < t.length(); i++){
            char c = t.at(i);
            if (hash.find(c) != hash.end()){
                if (hash[c] > 0)
                    hash[c]--;
                if (hash[c] == 0){
                    hash.erase(c);
                }
            }
            else return false;
        }
        if (hash.size() != 0) return false;

        return true;
    }
};