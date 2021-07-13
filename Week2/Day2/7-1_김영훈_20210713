//https://www.acmicpc.net/problem/10814

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct user{
    int age;
    string name;
};

bool compare(user a, user b){
    return a.age < b.age;
}

int main()
{
    int num, i, j;
    vector<user> users; 
    user new_user;

    cin >> num;

    for (i = 0; i < num; i++){
        cin >> new_user.age;
        cin >> new_user.name;
        users.push_back(new_user);
    }

    stable_sort(users.begin(), users.end(), compare);

    for (i = 0; i < num; i++)
        cout << users[i].age << " " << users[i].name << "\n";
}
