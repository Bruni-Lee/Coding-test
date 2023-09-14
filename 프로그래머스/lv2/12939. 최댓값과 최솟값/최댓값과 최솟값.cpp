#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s) {
	vector<int> num;
	string Tempstr;
	int Tempint;

	for (int i = 0; i <= s.size(); i++)
	{
		if (s[i] == ' ' || i == s.size()) //공백이거나, 마지막i일때
		{
		    num.push_back(stoi(Tempstr));//문자열을 int형태로 형 변환후 벡터로 저장
			Tempstr = ""; //Tempstr.clear() 같은거
		}
		else
			Tempstr += s[i];
	}
    
	sort(num.begin(), num.end()); //오름차순으로 벡터를 정리
	Tempstr = to_string(num[0]) + " " + to_string(num[num.size() - 1]);//문자열로 최솟값,최댓값 대입

	return Tempstr; //리턴
}

/*string solution(string s) {
    string answer = "";
    string token;
    istringstream iss(s);    //파싱 함수
    vector<int> num;

    while(getline(iss, token, ' '))  (iss)문자열,(token)토큰에저장,(' ')자르는기준
    {
          num.push_back(stoi(token));
    }

    sort(num.begin(), num.end());

    answer = to_string(num.front()) + " " + to_string(num.back());

    return answer;*/