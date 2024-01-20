// subtract-the-product-and-sum-of-digits-of-an-integer
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
// #include <iostream>
// using namespace std;
// int subtractProductAndSum(int n) {
//     int sum = 0;
//     int prod = 1;
//     while(n!=0)
//     {
//         int lastDigit = n%10;
//         sum+=lastDigit;
//         prod*=lastDigit;
//         n/=10;
//     };
//     // cout<<"prod is "<<prod<<endl;
//     // cout<<"sum is "<<sum<<endl;
//     return prod-sum;
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<subtractProductAndSum(n)<<endl;
//     return 0;
// };

// number-of-1-bits
// https://leetcode.com/problems/number-of-1-bits/
// #include <iostream>
// using namespace std;
// int hammingWeight(int n) {
//     int val = 0;
//     while (n!=0)
//     {
//         int lastBit = n&1;
//         if(lastBit)
//         {
//             val++;
//         };
//         n>>=1;
//     };
//     return val;
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;    
//     cout<<hammingWeight(n)<<endl;
//     return 0;
// };