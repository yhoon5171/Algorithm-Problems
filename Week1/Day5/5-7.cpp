//https://www.acmicpc.net/problem/2941

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{   
    vector<string> croatia = {"c=", "c-", "d-", "lj", "nj", "s=", "z="};
    string str;
    int cnt = 0;

    cin >> str;

    for (int i = 0; i < str.length(); i++){
        if (find(croatia.begin(), croatia.end(), str.substr(i, 2)) != croatia.end())
            i += 1;
        else if (str.substr(i, 3) == "dz=")
            i += 2;

        cnt++;
    }
    cout << cnt;

    return 0;
}
