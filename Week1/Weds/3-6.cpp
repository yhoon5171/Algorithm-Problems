//https://www.codeground.org/practice 1번 문제
//평가: 1

#include <iostream>

using namespace std;

int Answer;

int main(int argc, char** argv)
{
	int T, test_case;
    int cnt, num;

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
		
        cin >> cnt;

        for (int i = 0; i < cnt; i++){
            cin >> num;
            Answer ^= num;
        }

		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;
}
