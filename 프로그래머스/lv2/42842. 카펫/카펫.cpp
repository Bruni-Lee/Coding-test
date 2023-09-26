#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum;
    
    sum= brown + yellow;
    for(int height = 3;; height++)
    {
        if(!(sum % height))
        {
            int weight = sum / height;
            if((weight - 2) * (height - 2) == yellow)
            {
                answer.push_back(weight);
                answer.push_back(height);
                return answer;
            }
            
        }
    }
}