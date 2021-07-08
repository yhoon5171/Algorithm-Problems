//https://programmers.co.kr/learn/courses/30/lessons/49993
//평가: 2
//c++ string 메소드 미숙지

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int tmp = 0;
    int answer = 0;

    for (int i = 0; i < skill_trees.size(); i++){
        for (int j = 0; j < skill_trees[i].length(); j++){
            if (skill_trees[i].at(j) == skill.at(tmp))
                tmp++;
            else if (skill.find(skill_trees[i].at(j), tmp) != string::npos){
                break;
            }

            if (j == skill_trees[i].length() - 1 || tmp == skill.length()){
                answer++;
                break;
            }
        }
        tmp = 0;
    }

    cout << answer;
    
    return answer;
}
