#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n<0)
    {
        cout<<"error"<<endl;
    }
    else if(n==0)
    {
        cout<<1<<endl;
    }
    else
    {
        int prod = 1;
        for(int i = 1; i<=n; i++)
        {
            prod*=i;
        };
        cout<<prod<<endl;
    }
    return 0;
};