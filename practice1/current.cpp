#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
void printRotatedImage(vector<vector<int>> vect)
{
    int rows = vect.size();
    int cols = vect[0].size();
    for(int j = 0; j<cols; j++)
    {
        for(int i = 0; i<rows; i++)
        {
            cout<<vect[rows-i-1][j]<<" ";
        };
        cout<<endl;
    };
};
int main()
{
    vector<vector<int>> vect = {{1,2,3},{4,5,6},{7,8,9}};
    printRotatedImage(vect);
    return 0;
};