#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n)
{
string num = to_string(n);
    sort(num.begin(),num.end(),greater<>());
    
     string answer = num;
    return stoll(answer);   //stoll = string to long long 스트링을 롱롱형으로 바꿔줌.
}