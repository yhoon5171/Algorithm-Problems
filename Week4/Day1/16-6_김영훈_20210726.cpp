//https://leetcode.com/problems/happy-number/

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, bool> hash;
        int tmp;
        bool answer;

        while(1){
            while(n != 0){
                tmp += (n % 10) * (n % 10);
                n /= 10;
            }
            n = tmp;
            tmp = 0;
            if (n == 1) return true;

            if (hash.find(n) == hash.end())
                hash.insert(make_pair(n, true));
            else
                return false;
        }
    }
};