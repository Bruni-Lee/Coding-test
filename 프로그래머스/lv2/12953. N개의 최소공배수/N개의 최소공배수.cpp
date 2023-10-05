#include <string>
#include <vector>

using namespace std;
//최소공배수 = 두 수(a,b) 곱하기 최대공약수  = a*b / 최대공약수(GDC)
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int GCD(int a, int b) //G(a,b) = a와b의 최대공약수  G(a,b) = G(b,r) r은 나머지
{
	if (a == 0)
		return b;
	return GCD(b % a,a);
}
int LCM(int a,int b) //최소공배수는 두 수의 곱 나누기 최대공약수   a * b / GDC(a,b);
{
	return a * b / GCD(a, b);
}

int solution(vector<int> arr)
{
	int answer;
	answer = arr[0];
	for (int i = 1; i < arr.size(); i++)
	{
		answer = LCM(answer, arr[i]);
	}
	return answer;

}