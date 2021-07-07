//https://www.acmicpc.net/problem/17210
//평가: 1

#include <iostream>
using namespace std;

int main()
{
    int num_doors, method, save_method;
    int two_multiple, three_multiple;

    cin >> num_doors;
    cin >> method;
    save_method = method;

    if (method == 0){
        two_multiple = 1;
        three_multiple = 0;
    }
    else{
        two_multiple = 0;
        three_multiple = 1;
    }

    for (int i = 2; i < num_doors + 1; i++){
        if (method == 0) method = 1;
        else method = 0;

        if (i % 2 == 0 && two_multiple != method){
            cout << "Love is open door";
            exit(0);
        }       
        if (i % 3 == 0 && three_multiple != method){
            cout << "Love is open door";
            exit(0);
        }
    }

    for (int i = 2; i < num_doors + 1; i++){
        if (save_method == 0) save_method = 1;
        else save_method = 0;

        cout << save_method << endl;
    }
}
