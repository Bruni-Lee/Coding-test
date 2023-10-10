#include <string>
#include <vector>
//약수 : 예> 12를 나누었을 때 나머지가 0이 되는 수
using namespace std;

int solution(int n)
{
    int answer = 0;
    for(int i = 1; i <= n; i++)
    {
    if(n % i == 0)
        answer+=i;
    }
    return answer;
}