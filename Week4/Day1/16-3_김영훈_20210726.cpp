//https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> numerals = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int idx = 0;
        int pastVal = INT_MAX;
        char key;
        int answer = 0;

        while (idx < s.length()){
            key = s.at(idx);
            if (numerals[key] > pastVal){
                answer -= pastVal * 2;
            }
            answer += numerals[key];
            pastVal = numerals[key];
            idx++;
        }
        
        return answer;
    }
};