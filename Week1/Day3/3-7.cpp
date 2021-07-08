//https://leetcode.com/problems/lemonade-change/
// 평가: 1

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_dollars = 0;
        int ten_dollars = 0;

        for (int i = 0; i < bills.size(); i++){
            if (bills[i] == 5)
                five_dollars += 1;
            else if (bills[i] == 10){
                five_dollars -= 1;
                ten_dollars += 1;
            }
            else{
                if (ten_dollars != 0 && five_dollars != 0){
                    ten_dollars -= 1;
                    five_dollars -= 1;
                }
                else if (ten_dollars == 0){
                    five_dollars -= 3;
                }
                else{
                    return false;
                }
            }

            if (five_dollars < 0 || ten_dollars < 0) return false;
        }
        return true;
    }
};
