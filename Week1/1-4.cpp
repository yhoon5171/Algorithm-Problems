#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num_testcase, num_students, input_score;
    vector<vector<int>> v(1000,vector<int>(1000, 0));
    int sum = 0;
    double average = 0;

    cin >> num_testcase;

    for (int i = 0; i < num_testcase; i++){
        cin >> num_students;
        v[i][0] = num_students;
        for (int j = 1; j < num_students + 1; j++){
            cin >> input_score;
            v[i][j] = input_score;
        }
    }

    int cnt = 0;
    for (int i = 0; i < num_testcase; i++){
        for (int j = 1; j < v[i][0] + 1; j++){
            sum += v[i][j];
        }
        average = (double)sum / v[i][0];

        for (int j = 1; j < v[i][0] + 1; j++){
            if (v[i][j] > average)
                cnt++;
        }
        printf("%.3f%\n", (double)cnt/v[i][0] * 100);
        sum = 0;
        cnt = 0;
    }
}