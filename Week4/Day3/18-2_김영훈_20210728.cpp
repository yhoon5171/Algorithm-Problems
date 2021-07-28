//https://www.acmicpc.net/problem/17212

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> count(N + 1);

    count[1] = 1; count[2] = 1; count[3] = 2; count[4] = 2; count[5] = 1; count[6] = 2; count[7] = 1;

    if (N % 7 == 0){
        printf("%d", N / 7);
        return 0;
    }
    else{
        for (int i = 8; i < N + 1; i++){
            if (i % 7 == 0) count[i] = i / 7;
            else count[i] = min({count[i - 1], count[i - 2], count[i - 5]}) + 1;
        }
    }
    printf("%d", count[N]);

    return 0;
}