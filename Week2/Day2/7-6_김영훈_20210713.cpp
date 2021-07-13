#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair <int, int> b){
    if (a.first != b.first)
        return a.first > b.first;
    else
        return a.second > b.first;
}

int main()
{
    int num, i;
    int x, y;
    vector<pair<int,int>> xy;

    cin >> num;

    for (i = 0; i < num; i++){
        cin >> x; cin >> y;
        xy.push_back(make_pair(x, y));
    }
    sort(xy.begin(), xy.end());

    for (i = 0; i < num; i++)
        cout << xy[i].first << " " << xy[i].second << "\n"; 
}