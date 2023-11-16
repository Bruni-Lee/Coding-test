#include <string>
#include <vector>
#include <iostream>

using namespace std; //문제를 다시 이해합시다./ 큰것중에서 가장큰것,가장작은것중에 가장큰것을 구하면 모든 지갑이 들어간다

int solution(vector<vector<int>> sizes) {
    int Big, Small, Answer;
    for (int i = 0; i < sizes.size(); i++)
    {
        {
            if (i == 0)
            {
                if (sizes[i][0] > sizes[i][1])
                {
                    Big = sizes[i][0];
                    Small = sizes[i][1];
                }
                else
                {
                    Big = sizes[i][1];
                    Small = sizes[i][0];
                }

            }
            else // i가 0이 아닐 때
            {
                if (sizes[i][0] > sizes[i][1])
                {
                    if (Big < sizes[i][0])
                        Big = sizes[i][0];
                    if (Small < sizes[i][1])
                        Small = sizes[i][1];
                }
                else
                {
                    if (Small < sizes[i][0])
                        Small = sizes[i][0];
                    if (Big < sizes[i][1])
                        Big = sizes[i][1];
                }
            }
        }
    }
    return Big * Small;
}