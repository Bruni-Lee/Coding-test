#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    long long count = 0;
    long long tempn = n;
    while (0 < tempn)
    {
        tempn /= 10;
        count++;
    }
    long long temp;
    for (int i = 0; i < count; i++)
    {
        temp = n % 10;
        answer.push_back(temp);
        n = n / 10;
    }
    return answer;
}