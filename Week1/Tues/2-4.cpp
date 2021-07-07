#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> alpha = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    string input;
    int time = 0;

    cin >> input;

    for (int i = 0; i < input.length(); i++){
        for (int j = 0; j < alpha.size(); j++){
            if (alpha[j].find(input.at(i)) != string::npos){
                time += j + 3;
            }
        }
    }
    cout << time;
}