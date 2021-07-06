#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int cnt = 0;
    
    for (int i = 0; i < nums.size() - 2; i++){
        for (int j = i + 1; j < nums.size(); j++){
            for (int z = j + 1; z < nums.size(); z++){
                for (int c = 2; c < nums[i] + nums[j] + nums[z]; c++){
                    if ((nums[i] + nums[j] + nums[z]) % c == 0){
                        cnt = -1;
                        break;
                    }
                }
                if (cnt == 0)
                    answer++;
                cnt = 0;
            }
        }
    }
    return answer;
}