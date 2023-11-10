#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int>Temp;
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
            Temp.push_back(numbers[i] + numbers[j]);
    }
    sort(Temp.begin(), Temp.end());
    Temp.erase(unique(Temp.begin(), Temp.end()),Temp.end());

    return Temp;
}