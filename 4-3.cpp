#include <iostream>
#include <map>
using namespace std;

int main()
{
    int num;
    map<int, int> remainder;
    int i;
    int remain;

    for (i = 0; i < 10; i++){
        cin >> num;
        remain = num % 42;
        remainder.insert(make_pair(remain, i));
    }

    cout << remainder.size();
}