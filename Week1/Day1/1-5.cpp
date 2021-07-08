//https://leetcode.com/problems/plus-one/
//평가: 1

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>::iterator iter;

        iter = digits.end() - 1;
        *iter += 1;

        while(1){
            if (*iter == 10){
                *iter = 0;
                if (iter == digits.begin()){
                    digits.insert(digits.begin(), 1);
                    break;
                }
                else{
                    iter = iter - 1;
                    *iter += 1;
                }
            }
            else break;
        }
        return digits;
    }
};
