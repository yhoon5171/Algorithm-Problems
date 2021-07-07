//https://www.acmicpc.net/problem/5598
//평가: 1

#include <iostream>
using namespace std;

int main()
{
    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++){
        if (str.at(i) != 'A' && str.at(i) != 'B' && str.at(i) != 'C'){
            str.at(i) -= 3;
        }
        else{
            if (str.at(i) == 'A') str.at(i) = 'X';
            else if (str.at(i) == 'B') str.at(i) = 'Y';
            else str.at(i) = 'Z';
        }
    }
    cout << str;
}
