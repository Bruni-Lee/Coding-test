#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int Sump = 0;
    int Sumy =0;
    
    for(int i =0; i <s.size(); i++)
    {
     if(s[i] == 'p' || s[i] == 'P')
         Sump++;
    else if(s[i] == 'y' || s[i] == 'Y')
        Sumy++;
    }
    return Sump == Sumy ? true : false;

}