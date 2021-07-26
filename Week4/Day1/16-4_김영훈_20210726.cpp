//https://programmers.co.kr/learn/courses/30/lessons/12914

#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    
    for (int i = 0; i < n - 1; i++)
        v.push_back((v[i] + v[i + 1]) % 1234567);
    
    return v.back();
}