// 1) leap-year (done) (geeksforgeeks)
// https://www.geeksforgeeks.org/problems/leap-year0943/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// 2) palindrome-number (done) (leetcode)
// https://leetcode.com/problems/palindrome-number/description/

// 3) trailing-zeroes-in-factorial (done) ✅ (geeksforgeeks) 
// https://www.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
// #include <iostream>
// using namespace std;
// int trailingZeroes(int N)
// {
//     int numberOfZeroes = 0;
//     int dividend = N;
//     int divisor = 5;
//     while(dividend/divisor>0)
//     {
//         int quotient = dividend/divisor;
//         numberOfZeroes+=quotient;
//         divisor*=5;
//     };
//     return numberOfZeroes;
// };
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         cout<<"number of trailingzeroes in "<<i<<" is "<<trailingZeroes(i)<<endl;
//     }
//     return 0;
// };

// CHECK IF ARMSTRONG NUMBER ✅ 
// #include <iostream>
// #include <cmath>
// using namespace std;
// bool isArmstrong(int n)
// {
//     int m = n;
//     float sum = 0;
//     int count = 0;
//     while(m!=0)
//     {
//         count++;
//         int lastDigit = n%10;
//         m/=10;
//     };
//     m = n;
//     while(m!=0)
//     {
//         int lastDigit = m%10;
//         sum += pow(lastDigit,count);
//         m/=10;
//     }
//     cout<<"sum is "<<sum<<endl;
//     cout<<"number of digits is "<<count<<endl;
//     if(n==sum)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;  
//     cout<<isArmstrong(n)<<endl;
//     return 0;
// };

// CONVERT LOWERCASE TO UPPERCASE
// #include <iostream>
// using namespace std;
// char upperCase(char a)
// {
//     return char(int(a)-32);
// }
// int main()
// {
//     char a;
//     cout<<"Enter the character: ";
//     cin>>a;
//     cout<<upperCase(a)<<endl;
//     return 0;
// };
