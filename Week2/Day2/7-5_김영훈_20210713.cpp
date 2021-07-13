//https://www.acmicpc.net/problem/1427

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(char &a, char &b){
    return a > b;
}

int main()
{
    string number;
    vector<char> arr;

    cin >> number;

    for (int i = 0; i < number.length(); i++)
        arr.push_back(number.at(i));
    sort(arr.begin(), arr.end(), compare);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i];
}
