#include <string>
#include <vector>
#include<iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int>temp_array;
    vector<int> answer;   

    
    int first, second, third;
    
    for(int i = 0; i < commands.size(); i++)
    {
        first = commands[i][0];
        second = commands[i][1];
        third = commands[i][2];
        
        for (int w = first-1; w < second; w++)
        {
            temp_array.push_back(array[w]);
        }

        
        
        
        
        for (int e = 0; e < temp_array.size(); e++)
        {
            for(int f = e+1; f<temp_array.size();f++)
            {
                 if(temp_array[e] >temp_array[f])
                {
                    int tempnum;
                    tempnum = temp_array[e];
                    temp_array[e]=temp_array[f];
                    temp_array[f]=tempnum;
                 }
            }
        }
        for (int s = 0; s < temp_array.size(); s++)
            cout << temp_array[s];
        cout << endl;
        answer.push_back(temp_array[third-1]);
        temp_array.clear();
        
        
    }


    return answer;
}