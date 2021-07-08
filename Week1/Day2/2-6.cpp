//https://www.acmicpc.net/problem/1316
//평가: 1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> character;
    vector<char> result;
    int num;
    string input;
    bool TorF = true;
    int cnt = 0;

    cin >> num;
    for (int i = 0; i < num; i++){
        cin >> input;
        character.push_back(input);
    }

    for (int i = 0; i < num; i++){
        TorF = true;
        for (int j = 0; j < character[i].length(); j++){
            if (find(result.begin(), result.end(), character[i].at(j)) == result.end()){
                result.push_back(character[i].at(j));
            }
            else{
                if (result.back() != character[i].at(j)){
                    TorF = false;
                    break;
                }
            }
        }
        if (TorF == true) cnt++;
        result.clear();
    }

    cout << cnt;

    return 0;
}
