#include <string>
#include <vector>
#include<iostream>

using namespace std;
void binary(int, int&);

int solution(int n) {
    int nnum = 0, newnum = 0;
    binary(n, nnum);
    for (int i = n + 1;; i++)
    {
        binary(i, newnum);
        if (nnum == newnum)
            return i;
        else
            newnum = 0;
    }
}
void binary(int n, int& ref) //2진법으로 재 배치 해야함  //Temps문자열의 크기 
{
    if (n == 1)
    {
        ref++;
        return;
    }
    else if (n == 0)
        return;
    else
    {
        binary(n / 2, ref); //재귀함수
        if (n % 2 != 0)
            ref++;  
    }
}

/*int solution(int n) {
    int num = bitset<20>(n).count();

    while (bitset<20>(++n).count() != num);
    return n;*/