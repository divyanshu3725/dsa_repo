// 1) leap-year (done) (geekforgeeks)
// https://www.geeksforgeeks.org/problems/leap-year0943/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// 2) palindrome-number (done) (leetcode)
// https://leetcode.com/problems/palindrome-number/description/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int mySqrt(int x)
{
    int i = 1;
    long double prod = i * i;
    while (prod <= x)
    {
        i++;
        prod = i * i;
    };
    return i - 1;
};
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i = 0; i<=n; i++)
    {
    cout<<"for "<<i<<" it is "<<mySqrt(i)<<endl;
    }
}