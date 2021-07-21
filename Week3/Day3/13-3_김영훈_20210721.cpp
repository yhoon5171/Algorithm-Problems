//https://www.acmicpc.net/problem/16435

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, L;
    vector<int> tree_height;

    cin >> N >> L;
    
    for (int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        tree_height.push_back(tmp);
    }
    sort(tree_height.begin(), tree_height.end());
    
    int idx = 0;
    while(idx < tree_height.size()){
        if (tree_height[idx] <= L)
            L++;
        else break;
        idx++;
    }

    cout << L;
}