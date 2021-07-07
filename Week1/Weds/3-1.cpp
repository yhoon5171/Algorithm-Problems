//https://leetcode.com/problems/student-attendance-record-i/
//평가: 1

class Solution {
public:
    bool checkRecord(string s) {
        int cnt_absent = 0;
        int cnt_consecutive_late = 0;

        for (int i = 0; i < s.length(); i++){
            if (s.at(i) == 'L')
                cnt_consecutive_late++;
            else cnt_consecutive_late = 0;

            if (cnt_consecutive_late == 3) return false;

            if (s.at(i) == 'A')
                cnt_absent++;

            if (cnt_absent == 2) return false;
        }

        return true;
    }
};
