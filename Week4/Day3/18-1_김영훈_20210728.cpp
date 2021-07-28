//https://leetcode.com/problems/counting-bits/

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> countBits(n + 1);

        for (int i = 0; i < n + 1; i++){
            int tmp = i , cnt = 0;
            while(tmp != 0){
                if (tmp % 2 == 1) cnt++;
                tmp /= 2;
            }
            countBits[i] = cnt;
        }
        return countBits;
    }
};
