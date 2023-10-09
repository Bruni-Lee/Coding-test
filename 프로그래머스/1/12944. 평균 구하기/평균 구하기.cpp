#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double sum = 0;
    double answer;
    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        answer = sum / arr.size();
        
    }
    return answer;
}

//double solution(vector<int> arr)
//{
//   double answer = accumulate(arr.begin(), arr.end(), 0);
//
//  return answer / arr.size();
//}