#include <iostream>
using namespace std;

int main()
{
    string arr[14] = {"baby", "sukhwan", "tururu", "turu", "very", "cute", "tururu", "turu", "in", "bed", "tururu", "turu", "baby", "sukhwan"};
    int num;
    int cnt_ru = 0;
    int i;

    cin >> num;

    for (i = 0; i < num; i++){
        if (i % 14 == 0) cnt_ru++;
    }

    num = num % 14 - 1;
    if (num == -1) num = 13;

    if (arr[num] == "turu"){
        if (cnt_ru >= 5)
            cout << "tu+ru*" << cnt_ru;
        else{
            cout << "turu";
            for (i = 0; i < cnt_ru - 1; i++)
                cout << "ru";
        }
    }
    else if (arr[num] == "tururu"){
        if (cnt_ru >= 4){
            cout << "tu+ru*" << cnt_ru + 1;
        }
        else{
            cout << "tururu";
            for (i = 0; i < cnt_ru - 1; i++)
                cout << "ru";
        }
    }
    else cout << arr[num];
}