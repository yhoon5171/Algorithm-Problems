class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> strarr;
        
        for (int i = 1; i < n + 1; i++){
            if (i % 3 == 0 && i % 5 == 0)
                strarr.push_back("FizzBuzz");
            else if (i % 3 == 0)
                strarr.push_back("Fizz");
            else if (i % 5 == 0)
                strarr.push_back("Buzz");
            else
                strarr.push_back(to_string(i));
        }
        return strarr;
    }
};