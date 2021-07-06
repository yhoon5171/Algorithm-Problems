//https://www.acmicpc.net/problem/4659
//평가 2
//문제에 비해 코드가 너무 무거움

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<char> letters = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};
    vector<char> consonant = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    string password;
    vector<char>::iterator iter;
    int cnt_vowel;
    int cnt_continuous_vowel;
    int cnt_continuous_consonant;
    bool cnt_same;
    char last_letter;

    while(1){    
        cnt_vowel = 0;
        cnt_continuous_consonant = 0;
        cnt_continuous_vowel = 0;
        cnt_same = false;
        cin >> password;
        if (password == "end")
            break;
        
        //check if there is vowel at least one and check consecutive three vowel or not
        for (iter = vowel.begin(); iter != vowel.end(); iter++){
            for (int i = 0; i < password.length(); i++){
                if (password.at(i) == *iter){
                    cnt_vowel++;
                    cnt_continuous_vowel++;
                }
                if (i == password.length() - 1)
                    cnt_continuous_vowel = 0;
                if (cnt_continuous_vowel == 3) break;
            }
            if (cnt_continuous_vowel == 3) break;
        }  

        //check consecutive three consonant or not
        for (iter = consonant.begin(); iter != consonant.end(); iter++){
            for (int i = 0; i < password.length(); i++){
                if (password.at(i) == *iter){
                    cnt_continuous_consonant++;
                    break;
                }
                if (i == password.length() - 1)
                    cnt_continuous_consonant = 0;
                if (cnt_continuous_consonant == 3) break;
            }
            if (cnt_continuous_consonant == 3) break;
        }

        //check two same letter or not.
        for (iter = letters.begin(); iter != letters.end(); iter++){
            last_letter = '?';
            for (int i = 0; i < password.length(); i++){
                if (password.at(i) != 'e' && password.at(i) != 'o'){
                    if (last_letter == password.at(i)){
                        cnt_same = true;
                    }
                }
                last_letter = password.at(i);
            }
            if (cnt_same == true) break;
        }

        if (cnt_vowel == 0 || cnt_continuous_vowel == 3 || cnt_continuous_consonant == 3 || cnt_same == true)
            cout << "<" << password << ">" << "is not acceptable." << endl;
        else
            cout << "<" << password << ">" << "is acceptable." << endl;     
    }

}
