#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(vector<int> people, int limit)
{

    sort(people.begin(), people.end(), greater<>()); //내림차순
    //sort(people.begin(), people.end());이건 오름차순임

    int boat = 0;
    int halfweightover = 0;
    int People = 0;

    if (people[0] < limit / 2) //반보다 가벼운 사람들만
    {
        boat = ceil(people.size() / 2.0f);
        return boat;
    }

    for (int i = 0; i < people.size(); i++) //반 보다 무거운 사람
    {
        if (people[i] > limit / 2) //반 보다 무거운 사람들 다 태우고
        {
            halfweightover++;
            boat++;
        }
        else
            break;
    }
    for (int i = halfweightover, j = 1; i < people.size(); i++) //반보다 무겁기만 한 사람
    {
        if (halfweightover - j >= 0)
        {
            if (people[halfweightover - j] + people[i] > limit)//어차피 못타니까 2명씩 빼
            {
                People++;
                boat++;
                if (People == 2) // 2명이 되면, 보트 하나추가, 사람 초기화
                {
                    People = 0;
                    boat--;
                }
            }
            else if (people[halfweightover - j] + people[i] <= limit) j++;//몸무게 큰애랑 작은애 같이 될 때
        }
        else
        {
            boat += ceil((people.size() - i) / 2.0f);
            break;
        }       
    }
    return boat;
}


/*
int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());
    reverse(people.begin(), people.end());
    int N = (int)people.size();
    int res = 0;
    for (int i = 0, j = N - 1; i <= j; i++) {
        if (people[i] + people[j] <= limit) {
            j--;
        }
        res++;
    }
    return res;                 벡터를 pop_back해줬을때 데이터가 사라져서 고생했는데 이렇게하니 안터지게 할 수도있네;
}
*/