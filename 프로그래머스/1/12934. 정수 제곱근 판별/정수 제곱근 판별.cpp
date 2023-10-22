#include <string>
#include <vector>

using namespace std;

long long solution(long long n)
{
    for(long long i = 1; i <= n; i++)
    {
        long long temp = i*i;

        if(temp < n)
            continue;
        else if(temp == n)
            return (i+1)*(i+1);
        else 
            return -1;
    }
}