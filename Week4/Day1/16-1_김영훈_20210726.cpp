//https://leetcode.com/problems/divisor-game/

class Solution {
public:
    bool divisorGame(int n) {
        int x = 1;
        int cnt = 0;

        while (n > 1){
            n -= x;
            cnt++;
        }
        if (cnt % 2 == 1)
            return true;
        return false;
    }
};
