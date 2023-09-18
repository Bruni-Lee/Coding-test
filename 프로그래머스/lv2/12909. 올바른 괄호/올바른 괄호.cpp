#include<string>
#include<stack>
#include<queue>
#include <iostream>

using namespace std;

bool solution(string s)
{        
     queue<int> q;
    if (s.size() % 2 != 0 || s[0] == ')')
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        if(q.empty()&&s[i]==')')
            return false;

        if (s[i] == '(')
            q.push(1);
        else
            q.pop();
    }
    return q.empty();
    

    
    
    
  /*  int Left =0 ,Right = 0;
    for(int i = 0; i <= s.size(); i++)
    {
        if(i == s.size()) //마지막을 체크
        {
            if(Left>Right)
                return false;
            
            return true;
        }        
        if(s[i] == '(')
            Left++;
        else if(s[i] == ')')
            Right++;
        
        if(Left < Right)
            return false;
    }*/
}