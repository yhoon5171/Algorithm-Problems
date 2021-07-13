//https://www.acmicpc.net/problem/5355

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int num;
    string equation = "";
    double result;

    cin >> num;
    for (int i = 0; i < num; i++){
        cin >> result;
        cin.ignore();
        getline(cin, equation);
        equation.erase(remove(equation.begin(), equation.end(), ' '), equation.end());
        for (int j = 0; j < equation.length(); j++){
            if (equation.at(j) == '@')
                result *= 3;
            else if (equation.at(j) == '%')
                result += 5;
            else result -= 7;
        }
        printf("%.2f\n", result);
    }
}
