//https://leetcode.com/problems/baseball-game/

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> tmp;
        int sum = 0;

        for (int i = 0; i < ops.size(); i++){
            if (ops[i] == "C")
                tmp.pop_back();
            else if (ops[i] == "D")
                tmp.push_back(tmp[tmp.size() - 1] * 2);
            else if (ops[i] == "+")
                tmp.push_back(tmp[tmp.size() - 1] + tmp[tmp.size() - 2]);
            else tmp.push_back(stoi(ops[i]));
        }

        for (int i = 0; i < tmp.size(); i++){
            sum += tmp[i];
        }
        return sum;
    }
};