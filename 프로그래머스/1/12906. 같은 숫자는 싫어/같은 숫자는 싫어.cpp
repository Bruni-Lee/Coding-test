#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)  //arr은 이미 정의가 되어있다는 걸까?
{
    vector<int> answer;

for(int i =0; i <arr.size(); i++)
{
    if(answer.empty())
        answer.push_back(arr[i]);
    else
        if(arr[i] != answer[answer.size()-1])
            answer.push_back(arr[i]);
}
    return answer;
}