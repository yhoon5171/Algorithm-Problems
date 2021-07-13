//https://programmers.co.kr/learn/courses/30/lessons/42883

#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    int cnt = 0;
    string answer;

    for (int i = 0; i < number.length() - 1; i++){
        if (number.at(i) < number.at(i + 1)){
            cnt++;
            number.erase(number.begin() + i);
            i = -1;
        }
        if (cnt == k)
            break;
    }
    if (cnt != k)
        number.erase(number.end() - (k - cnt), number.end());
    
    return number;
}
