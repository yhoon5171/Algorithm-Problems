//https://www.acmicpc.net/problem/11047

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K;
    vector<int> kind;

    cin >> N >> K;

    int tmp;
    for (int i = 0; i < N; i++){
        cin >> tmp;
        kind.push_back(tmp);
    }

    int val = 0;
    int cnt = 0;
    int idx = N - 1;

    while(idx != -1){
        if (val + kind[idx] == K){
            cnt++;
            break;
        }
        else if (val + kind[idx] > K)
            idx--;
        else{
            val += kind[idx];
            cnt++;
        }
    }

    cout << cnt;
}
