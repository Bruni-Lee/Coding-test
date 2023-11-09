#include <string>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

vector<int> solution(vector<int> arr)
{
    int index;
    if(arr.size() == 1 && arr[0] == 10)
    {
        arr.pop_back();
        arr.push_back(-1);
        return arr;
    }
    
    //arr.erase(unique(arr.begin(), arr.end()), arr.end()); // 중복제거
  index = min_element(arr.begin(), arr.end()) - arr.begin();
    
      arr.erase(arr.begin()+index);
    
    
        return arr;
}
//Temparr.erase(unique(Temparr.begin(), Temparr.end()), Temparr.end()); // 중복제거