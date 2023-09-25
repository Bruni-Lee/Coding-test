#include <iostream>
#include <stack>
#include<string>
using namespace std;

int solution(string s)
{
    stack<char> ss;
    for(int i = 0; i <s.size(); i ++)
    {
        if(ss.empty() || ss.top() != s[i])
            ss.push(s[i]);
        else
            ss.pop();            
    }
    return ss.empty();
}