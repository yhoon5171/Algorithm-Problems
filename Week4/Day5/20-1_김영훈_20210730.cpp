//https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    string changeLetters(string &a){
        unordered_map<char,char> hash;
        char cur = 'a';
        string word;

        for (auto letter : a)
            if (!hash[letter]) hash[letter] = cur++;
        for (int i = 0; i < a.size(); i++) a[i] = hash[a[i]];

        return a;
    }
    
    bool isIsomorphic(string s, string t) {
        return (changeLetters(s) == changeLetters(t));
    }
};
