#include <string>
#include <vector>

using namespace std;

int solution(vector<int> cookie) {
    int answer = 0;

    for (int i = 0; i < cookie.size() - 1; i++){
        int sum_left = cookie[i];
        int sum_right = cookie[i + 1];
        int lindex = i;
        int rindex = i + 1;

        while (1){
            if (sum_left == sum_right)
                answer = max(answer, sum_left);
            if (sum_left > sum_right){
                if (rindex + 1 == cookie.size()) break;
                sum_right += cookie[++rindex];
            }
            else{
                if (lindex - 1 < 0) break;
                sum_left += cookie[--lindex];
            }
        }
    }
    
    return answer;
}