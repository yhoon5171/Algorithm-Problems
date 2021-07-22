//https://www.acmicpc.net/problem/15729

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> arr1(N);
    vector<int> arr2(N);

    for (int i = 0; i < N; i++)
        cin >> arr1[i];
    
    int cnt = 0;
    for (int i = 0; i < N; i++){
        if (arr1[i] != arr2[i]){
            cnt++;
            if (i < N - 2){
                arr2[i + 1] = 1 - arr2[i + 1];
                arr2[i + 2] = 1 - arr2[i + 2];
            }
            else if (i < N - 1){
                arr2[i + 1] = 1 - arr2[i + 1];
            }
        }
    }

    cout << cnt;
}
