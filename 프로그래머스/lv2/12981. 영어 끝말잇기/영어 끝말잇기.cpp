#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector<int> GoReturn(vector<int>&, int, int);

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> savewords;
    int ordernum = 1, turn = 1;
    char lastbeforeword;
    char firstnextword;
    string beforeword;
    string nextword;
    beforeword.clear();

    for (int i = 0; i < words.size(); i++)
    {
        if (i == 0)
        {
            beforeword = words[0];
            nextword = words[1];
            savewords.push_back(beforeword); //지나간단어들 저장.
        }
        else
        {
            for (int i = 0; i < savewords.size(); i++)
            {
                if (savewords[i] == nextword)
                {
                    GoReturn(answer, ordernum, turn);
                    return answer;
                }
            }
            lastbeforeword = beforeword[beforeword.size()-1]; //이전 단어의 마지막
            firstnextword = nextword[0]; // 다음 단어의 처음

            if (lastbeforeword == firstnextword && i != words.size()-1) //이전 단어의 마지막과 다음단어의 처음이 같고 반복문의 마지막이 아닐 때
            {
                beforeword = words[i];//이전단어 
                nextword = words[i + 1]; //다음단어
                savewords.push_back(words[i]);
            }
            else if(lastbeforeword != firstnextword) //중복이 있다면
            {
                answer.push_back(ordernum);
                answer.push_back(turn);
                return answer;
            }
        }
        if (ordernum >= n) //사람수보다 크거나 같으면
        {
            ordernum = 1; //1번 순서로 초기화
            turn++; //턴 증가
        }
        else
            ordernum++;
    }
    //중복이 없다면 0,0리턴
    answer.clear();
    answer.push_back(0);
    answer.push_back(0);
    return answer;
}
vector<int> GoReturn(vector<int>& answer, int ordernum , int turn)
{
    answer.push_back(ordernum);
    answer.push_back(turn);
    return answer;    
}