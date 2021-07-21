//https://www.acmicpc.net/problem/1541

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string equation;
    string input;
    string tmp;
    int answer = 0;
    int m = 0;
    int cnt_plus = 0, cnt_minus = 0;

    cin >> equation;

    for (int i = 0; i < equation.length(); i++){
        if (equation.at(i) != '-' && equation.at(i) != '+'){
            tmp += equation.at(i);
        }
        else{
            if (m == 1)
                answer -= stoi(tmp);
            else
                answer += stoi(tmp);
            tmp = "";

            if (equation.at(i) == '-')
                m = 1;
        }

        if (i == equation.length() - 1){
            if (m == 1)
                answer -= stoi(tmp);
            else
                answer += stoi(tmp);
        }
    }
    cout << answer;
}