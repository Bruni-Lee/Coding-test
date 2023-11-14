#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string Tempstring1 = "", Tempstring2 = "", Tempanswer = "";
    vector<int>Temparr1, Temparr2;
    Temparr1 = arr1;
    Temparr2 = arr2;
    int Tempnum1, Tempnum2;
    for (int i = 0; i < n; i++)
    {
        Tempnum1 = Temparr1[i];
        Tempnum2 = Temparr2[i];
        for (int j = n-1; j >=0 ; j--)
        {
            if (Tempnum1 % 2 == 1)
                Tempstring1 += '#';
            else
                Tempstring1 += ' ';

            Tempnum1 /= 2;
            if (Tempnum1 <= 0)
                Tempstring1 += ' ';
        }
        for (int j = n-1; j >=0; j--)
        {
            if (Tempnum2 % 2 == 1)
                Tempstring2 += '#';
            else
                Tempstring2 += ' ';

            Tempnum2 /= 2;
            if (Tempnum2 <= 0)
                Tempstring2 += ' ';
        }
        // for[i]
        for (int i = n-1; i >=0; i--)
        {
            if (Tempstring1[i] == '#' || Tempstring2[i] == '#')
                Tempanswer += '#';
            else
                Tempanswer += ' ';

        }
        answer.push_back(Tempanswer);
        Tempstring1 = "";
        Tempstring2 = "";
        Tempanswer = "";
    }
    for (string a : answer)
        cout << a << endl;
    return answer;
}