#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
#include <bits/stdc++.h> 
int baseConversion(string &num, int base)
{
	// Write your code here
	int count = 0;
	double sum = 0;
	for(int i = num.length()-1; i>=0; i--)
	{
        int checkNum; 
        if(num[i]>=48 && num[i]<=57)
        {
            checkNum = num[i]-48;
            cout<<"num[i] is "<<num[i]<<endl;
            cout<<"checkNum is "<<checkNum<<endl;
        }
        else
        {
            checkNum = num[i] - 55;
            cout<<"num[i] is "<<num[i]<<endl;
            cout<<"checkNum is "<<checkNum<<endl;
        };
        if(checkNum>=base)
        {
            return -1;
        };
        sum += pow(base,count)*checkNum;
        count++;
	};
	return sum;
}
int main()
{
    string num;
    int base;
    cin>>num;
    cin>>base;
    cout<<baseConversion(num,base)<<endl;
};