#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) 
{
    int Temptotal = 45;
    for(int i=0; i< numbers.size(); i++)
    {
        Temptotal-=numbers[i];
    }
    return Temptotal;
}