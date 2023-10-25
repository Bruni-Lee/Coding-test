#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b)
{
    long long sum =0;
    if(a >b)
    {
    int temp = a;
    a = b;
    b = temp;
    }

    if(a<=b)
    {    
    for(int i = a; i<=b; i++)
        sum+= i;
    }
    return sum;
}