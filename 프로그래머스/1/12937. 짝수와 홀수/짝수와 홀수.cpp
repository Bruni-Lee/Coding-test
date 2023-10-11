#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    if(0 == num % 2)
        answer = "Even";
    else
        answer = "Odd";
    return answer;
}