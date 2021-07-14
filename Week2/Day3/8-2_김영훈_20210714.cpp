//https://www.codeground.org/practice  3번 문제

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int Answer;

int main(int argc, char** argv)
{
	int T, test_case;
    int num_test, num_choose;

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
        cin >> num_test >> num_choose;
        int *scores = new int[num_test];
		Answer = 0;

        for (int i = 0; i < num_test; i++)
            cin >> scores[i];
        sort(scores, scores + num_test);
        for (int i = num_test - 1; i > num_test - num_choose - 1; i--)
            Answer += scores[i];

		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;
}