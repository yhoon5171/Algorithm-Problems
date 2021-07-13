#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int begin, end, i;
    int num;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<pair<string, int>> result;
    string tmp;

    cin >> begin >> end;

    for (i = begin; i <= end; i++){
        tmp = " ";
        num = i;
        while(num != 0){
            tmp.insert(0, arr[num%10]);
            num /= 10;
        }
        result.push_back(make_pair(tmp, i));
    }
    sort(result.begin(), result.end());

    for (i = 0; i <= end - begin; i++){
        cout << result[i].second;
        if ((i + 1) % 10 != 0)
            cout << " ";
        else cout << "\n";
    }
}