#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer;
    string temp,temp2;
    temp2 = "";
    temp = to_string(x);
    int x2 = 0;
    for(int i = 0; i < temp.size(); i++)
    {
        temp2 = temp[i];  
        x2 += stoi(temp2);//문자열이라 붙음 이걸 인트로바꿔줘야하는데??  
    }
 
    if(x % x2 == 0)
        answer = true;
    else
        answer = false;
    return answer;
}