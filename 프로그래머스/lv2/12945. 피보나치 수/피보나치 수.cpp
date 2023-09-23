#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    vector<int> F;
    
    
    F.push_back(0);
    F.push_back(1);
    if (n > 1)
    {
        for (int i =2; i <= n; i++)
        {
            F.push_back((F[i - 1] + F[i - 2]) % 1234567);
        }
    }
    return F[n];
}