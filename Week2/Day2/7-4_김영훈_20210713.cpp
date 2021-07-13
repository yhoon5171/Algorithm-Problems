//https://www.acmicpc.net/problem/11656

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    vector<string> suffix;
    int i, num;

    cin >> word;

    num = word.length();
    for (i = 0; i < num; i++){
        suffix.push_back(word);
        word.erase(word.begin());
    }
    sort(suffix.begin(), suffix.end());

    for (i = 0; i < num; i++)
        cout << suffix[i] << "\n";
}
