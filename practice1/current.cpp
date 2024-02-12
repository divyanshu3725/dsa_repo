#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int A, B, K;
    cin>>A>>B>>K;
    int count = 0;
    bool found = false;
    int answer = 0;
    for(int i = A; i<=B; i++)
    {
        bool prime = true;
        for(int j = 2; j<i; j++)
        {
            if(i%j==0)
            {
                prime = false;
                break;
            };
        };
        if(i==1)
        {
            prime = false;
        };
        if(prime)
        {
            cout<<i<<" is prime"<<endl;
            count++;
            if(count==K)
            {
                answer = i;
                found = true;
                break;
            };
        };
    };
    if(found)
    {
        cout<<answer<<endl;
    }
    else
    {
        cout<<-1<<endl;
    };
};