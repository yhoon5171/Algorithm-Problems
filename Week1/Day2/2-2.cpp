//https://www.acmicpc.net/problem/8958
//평가: 1

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> results;
    int num_result;
    string grade;
    int score;
    int sum = 0;

    cin >> num_result;

    for (int i = 0; i < num_result; i++){
        cin >> grade;
        results.push_back(grade);
    }

    for (int i = 0; i < results.size(); i++){
        sum = 0;
        score = 0;
        for (int j = 0; j < results[i].length(); j++){
            if (results[i].at(j) != 'X'){
                score += 1;
                sum += score;
            }
            else score = 0;
        }
        cout << sum << endl;
    }
}
