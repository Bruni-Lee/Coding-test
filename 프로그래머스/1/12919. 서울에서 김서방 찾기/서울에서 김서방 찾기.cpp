#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) 
{
    string answer;
    int count = 0;
    for(string a : seoul)
    {
        if (a == "Kim")
        {
            answer = "김서방은 " + to_string(count) + "에 있다";
            return answer;
        }
        count ++;
    }
}