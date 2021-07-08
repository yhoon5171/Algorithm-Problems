//https://www.acmicpc.net/problem/2920
//평가: 1

#include <iostream>
using namespace std;

int main()
{
    int array[8];
    int i;
    int cnt_ascend = 0, cnt_descend = 0;

    for (i = 0; i < 8; i++)
        cin >> array[i];

    for (i = 0; i < 7; i++){
        if (array[i + 1] - array[i] == 1)
            cnt_ascend++;
        else if (array[i + 1] - array[i] == -1)
            cnt_descend++;
        else
            break;
    }
    
    if (cnt_ascend == 7)
        cout << "ascending";
    else if (cnt_descend == 7)
        cout << "descending";
    else
        cout << "mixed";
}
