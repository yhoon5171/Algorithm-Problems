//https://www.acmicpc.net/problem/6321
//평가: 1

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> comName;
    int num;
    string tmp;

    cin >> num;

    for (int i = 0; i < num; i++){
        cin >> tmp;
        comName.push_back(tmp);
    }

    for (int i = 0; i < num; i++){
        for (int j = 0; j < comName[i].length(); j++){
            if (comName[i].at(j) == 'Z')
                comName[i].at(j) = 'A';
            else comName[i].at(j) += 1;
        }
    }

    for (int i = 0; i < num; i++){
        cout << "String #" << i + 1 << endl;
        cout << comName[i] << endl;
        if (i != num - 1) cout << endl;
    }
}
