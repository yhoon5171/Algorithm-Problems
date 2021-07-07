//https://www.acmicpc.net/problem/11721
//평가: 1

#include <iostream>
using namespace std;

int main()
{
    string str;
    string tmp = "";

    cin >> str;

    for (int i = 0; i < 10; i++){
        tmp.push_back(str.at(i));
        if (i == 9){
            cout << tmp << endl;
            tmp = "";
            str.erase(str.begin(), str.begin() + 10);
            i = -1;
        }
        if (i == str.length() - 1){
            cout << tmp;
            exit(0);
        }
    }
}
