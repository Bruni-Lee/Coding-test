#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num)
{
    long long tempNum = num;
    int temp = 1;
    if(tempNum == 1)
    return 0;
    while(500 >= temp)
    {
        
        
        
    if(0 == tempNum % 2)
        tempNum /=2;
        
    else
    {
        tempNum*=3;
        tempNum+=1;
    }
            if(tempNum == 1)
    return temp;
        
        temp++;
    }
    
    cout << temp;
    return -1;
}