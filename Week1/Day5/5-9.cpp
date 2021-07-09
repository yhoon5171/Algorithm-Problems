#include <string>
#include <set>
using namespace std;

int solution(string dirs) {
    set<string> path;
    int i = 0, j = 0;
    int z;
    int answer;

    for (z = 0; z < dirs.length(); z++){
        if (dirs.at(z) == 'U'){
            if (i != 5){
                path.insert(to_string(i) + to_string(j) + " " + to_string(i + 1) + to_string(j));
                path.insert(to_string(i + 1) + to_string(j) + " " + to_string(i) + to_string(j));
                i++;
            }
        }
        else if (dirs.at(z) == 'D'){
            if (i != -5){
                path.insert(to_string(i) + to_string(j) + " " + to_string(i - 1) + to_string(j));
                path.insert(to_string(i - 1) + to_string(j) + " " + to_string(i) + to_string(j));
                i--;
            }
        }
        else if (dirs.at(z) == 'R'){
            if (j != 5){
                path.insert(to_string(i) + to_string(j) + " " + to_string(i) + to_string(j + 1));
                path.insert(to_string(i) + to_string(j + 1) + " " + to_string(i) + to_string(j));
                j++;
            }
        }
        else{
            if (j != -5){
                path.insert(to_string(i) + to_string(j) + " " + to_string(i) + to_string(j - 1));
                path.insert(to_string(i) + to_string(j - 1) + " " + to_string(i) + to_string(j));
                j--;
            }
        }
    }

    answer = path.size() / 2;
    return answer;
}