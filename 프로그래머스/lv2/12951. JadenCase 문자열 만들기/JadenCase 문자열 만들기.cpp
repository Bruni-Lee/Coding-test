#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	for (int i = 0; i < s.size(); i++)
	{
		if (i == 0 || s[i - 1] == ' ')
		{
			if (s[i] >= 48 && s[i] <= 57)
				continue;
			else if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
		else
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] += 32;
	}
	return s;
}

/*
    string answer = "";
    answer += toupper(s[0]);
    for (int i = 1; i < s.size(); i++)
        s[i - 1] == ' ' ? answer += toupper(s[i]) : answer += tolower(s[i]); //대소문자 만들어주는 함수
    return answer;
    */