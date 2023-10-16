#include <iostream>

using namespace std;
int solution(int n)
{
    int Tempn = n;
    int answer = 0;
    while(Tempn>0)
    {
        answer += Tempn % 10;
        Tempn = Tempn / 10;
    }

    return answer;
}

/*
{
    int answer = 0;
    
    string s = to_string(n);
    
    for(int i = 0; i < s.size(); i++)
    answer += (s[i] - '0');

    return answer;
}*/