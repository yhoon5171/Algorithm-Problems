#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string input;
    vector<char> character;
    vector<int> cnt;
    int biggest;
    int num;
    int same;

    cin >> input;

    for (int i = 0; i < input.length(); i++){
        if (input.at(i) > 96 && input.at(i) < 133){
            input.at(i) -= 32;
        }
    }

    for (int i = 0; i < input.length(); i++){
        if (find(character.begin(), character.end(), input.at(i)) == character.end()){
            character.push_back(input.at(i));
            cnt.push_back(1);
        }
        else{
            for (int j = 0; j < character.size(); j++)
                if (character[j] == input.at(i))
                    cnt[j] = cnt[j]+ 1;
        }
    }

    biggest = cnt[0];
    num = 0;
    same = 0;
    for (int i = 1; i < cnt.size(); i++){
        if (biggest < cnt[i]){
            biggest = cnt[i];
            num = i;
            same = 0;
        }
        else if (biggest == cnt[i]){
            same++;
        }
    }

    if (same == 0)
        cout << character[num];
    else
        cout << "?";
}