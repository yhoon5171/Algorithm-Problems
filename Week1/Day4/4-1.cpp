//https://www.acmicpc.net/problem/2953
//평가: 1

#include <iostream>
using namespace std;

int main()
{
    int arr[5][4];
    int total_score[5] = {0, };
    int winner;
    int winner_score = 0;
    int i, j;

    for (i = 0; i < 5; i++){
        for (j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < 5; i++){
        for (j = 0; j < 4; j++){
            total_score[i] += arr[i][j];
        }
    }

    for (i = 0; i < 5; i++){
        if (winner_score < total_score[i]){
            winner = i + 1;
            winner_score = total_score[i];
        }
    }

    cout << winner << " " << winner_score;
}
