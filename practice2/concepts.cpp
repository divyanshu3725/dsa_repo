#include <iostream>
#include <cmath>
using namespace std;

// PRINT FROM a to z
// int main()
// {
//     for(int i = int('a'); i<=int('z'); i++)
//     {
//         cout<<char(i)<<" ";
//     };
//     return 0;
// };

// PRINT FROM A to Z
// int main()
// {
//     for(int i = int('A'); i<=int('Z'); i++)
//     {
//         cout<<char(i)<<" ";
//     };
//     return 0;
// };

// PRINT TABLE OF n
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=10; i++)
//     {
//         cout<<n<<" X "<<i<<" = "<<n*i<<endl;
//     };
//     return 0;
// };

// PRINT VALUE OF A RAISED TO B
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Enter a: ";
//     cin>>a;
//     int b;
//     cout<<"Enter b: ";
//     cin>>b;
//     int result = 1;
//     for(int i = 1; i<=b; i++)
//     {
//         result*=a;
//     };
//     cout<<a<<" ^ "<<b<<" = "<<result<<endl;
//     return 0;
// };

// PRINT SUM OF FIRST N NATURAL NUMBERS
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int sum = 0;
//     for(int i = 1; i<=n; i++)
//     {
//         sum+=i;
//     };
//     cout<<"sum is "<<sum<<endl;
//     return 0;
// };

// PRINT FACTORIAL OF A NUMBER N
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int prod = 1;
//     for(int i = 1; i<=n; i++)
//     {
//         prod*=i;
//     };
//     cout<<n<<"! = "<<prod<<endl;
//     return 0;
// };

// CHECK IF A NUMBER IS PRIME OR NOT
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     if(n<=0)
//     {
//         cout<<"supply a +ve integer"<<endl;
//     }
//     else if (n==1)
//     {
//         cout<<"neither prime nor composite"<<endl;
//     }
//     else
//     {
//         bool prime = true;
//         for(int i = 2; i<n; i++)
//         {
//             if(n%i==0)
//             {
//                 prime = false;
//                 break;
//             };
//         };
//         if(prime)
//         {
//             cout<<"it is prime"<<endl;
//         }
//         else
//         {
//             cout<<"it is composite"<<endl;
//         };
//     };
//     return 0;
// };

// PRINT NTH TERM OF FIBONACCI SERIES
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     if(n<=0)
//     {
//         cout<<"supply positive number please "<<endl;
//     }
//     else if(n==1 || n==2)
//     {
//         cout<<1<<endl;
//     }
//     else
//     {
//         int a = 1;
//         int b = 1;
//         for(int i = 3; i<=n; i++)
//         {
//             int temp = a;
//             a = b;
//             b = b+temp;
//         };
//         cout<<b<<endl;
//     };
//     return 0;
// };

// PATTERN 1
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5
// #include <iostream>
// using namespace std;
// void printPattern(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << i << " ";
//         };
//         cout << endl;
//     }
// };
// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 2
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// #include <iostream>
// using namespace std;
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 3
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// #include <iostream>
// using namespace std;
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<n-j+1<<" ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 4
// 1 4 9 16
// 1 4 9 16
// 1 4 9 16
// 1 4 9 16
// #include <iostream>
// using namespace std;
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<j*j<<" ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 5
// a a a a 
// b b b b 
// c c c c
// d d d d
// #include <iostream>
// using namespace std;
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<char(96+i)<<" ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 6
// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e
// #include <iostream>
// using namespace std;
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<char(96+j)<<" ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 7
// 1 2 3
// 5 6 7
// 8 9 10
// #include <iostream>
// using namespace std;
// void printPattern(int n)
// {
//     int count = 1;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n; j++)
//         {
//             cout<<count<<" ";
//             count++;
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 8
// * 
// * *
// * * *
// * * * *
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
// };
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;    
//     printPattern(n);
//     return 0;
// };

// PATTERN 9
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
// };
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;    
//     printPattern(n);
//     return 0;
// };

// PATTERN 10
// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<i<<" ";
//         };
//         cout<<endl;
//     };
// };
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;    
//     printPattern(n);
//     return 0;
// };

// PATTERN 11
// 1
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = i; j>=1; j--)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
// };
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;    
//     printPattern(n);
//     return 0;
// };

// PATTERN 12
// a 
// b b 
// c c c 
// d d d d 
// e e e e e 
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<char(96+i)<<" ";
//         };
//         cout<<endl;
//     };
// };
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;    
//     printPattern(n);
//     return 0;
// };

// PATTERN 13
// * * * * * 
// * * * *
// * * *
// * *
// *
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i+1; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
// };
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;    
//     printPattern(n);
//     return 0;
// };

// PATTERN 14
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i+1; j++)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
// };
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;    
//     printPattern(n);
//     return 0;
// };

// PATTERN 15
// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = n; j>=n-i+1; j--)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
// };
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;    
//     printPattern(n);
//     return 0;
// };

// PATTERN 16
//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
// #include <iostream>
// using namespace std;
// int printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         };
//         for(int k = 1; k<=i; k++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 16
//         1 
//       2 2 
//     3 3 3  
//   4 4 4 4
// 5 5 5 5 5 
// #include <iostream>
// using namespace std;
// int printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         };
//         for(int k = 1; k<=i; k++)
//         {
//             cout<<i<<" ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 17
//         1 
//       1 2 
//     1 2 3  
//   1 2 3 4
// 1 2 3 4 5 
// #include <iostream>
// using namespace std;
// int printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         };
//         for(int k = 1; k<=i; k++)
//         {
//             cout<<k<<" ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 18
//         A 
//       A B 
//     A B C  
//   A B C D
// A B C D E 
// #include <iostream>
// using namespace std;
// int printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         };
//         for(int k = 1; k<=i; k++)
//         {
//             cout<<char(64+k)<<" ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 19
//         1
//       2 1
//     3 2 1 
//   4 3 2 1 
// 5 4 3 2 1 
// #include <iostream>
// using namespace std;
// int printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         };
//         for(int k = i; k>=1; k--)
//         {
//             cout<<k<<" ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 20
//         *     
//       * * *    
//     * * * * *    
//   * * * * * * *   
// * * * * * * * * *  
// #include <iostream>
// using namespace std;
// int printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         };
//         for(int k = 1; k<=2*i-1; k++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 21
// * * * * * * * * *  
//   * * * * * * *   
//     * * * * *    
//       * * *    
//         *     
// #include <iostream>
// using namespace std;
// int printPattern(int n)
// {
//     for(int i = n; i>=1; i--)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         };
//         for(int k = 1; k<=2*i-1; k++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 22
//         1     
//       1 2 1    
//     1 2 3 2 1    
//   1 2 3 4 3 2 1   
// 1 2 3 4 5 4 3 2 1  
// #include <iostream>
// using namespace std;
// int printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<"  ";
//         };
//         for(int k = 1; k<=i; k++)
//         {
//             cout<<k<<" ";
//         };
//         for(int l = i-1; l>=1; l--)
//         {
//             cout<<l<<" ";
//         }
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 23
// * * * * * * * *  
// * * *     * * * 
// * *         * * 
// *             * 
// * *         * * 
// * * *     * * * 
// * * * * * * * *  
// #include <iostream>
// using namespace std;
// int printPattern(int n)
// {
//     for(int i = 1; i<=(n+1)/2; i++)
//     {
//         for(int j = 1; j<=(((n+1)-((i-1)*2)))/2; j++)
//         {
//             cout<<"* ";
//         };
//         for(int k = 1; k<=(i-1)*2; k++)
//         {
//             cout<<"  ";
//         };
//         for(int l = (((n+1)-((i-1)*2)))/2; l>=1; l--)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i = (n-1)/2; i>=1; i--)
//     {
//         for(int j = 1; j<=(((n+1)-((i-1)*2)))/2; j++)
//         {
//             cout<<"* ";
//         };
//         for(int k = 1; k<=(i-1)*2; k++)
//         {
//             cout<<"  ";
//         };
//         for(int l = (((n+1)-((i-1)*2)))/2; l>=1; l--)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 24
// *             * 
// * *         * * 
// * * *     * * * 
// * * * * * * * * 
// * * *     * * * 
// * *         * * 
// *             * 
// #include <iostream>
// using namespace std;
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         for(int k = 1; k<=2*(n-i); k++)
//         {
//             cout<<"  ";
//         }
//         for(int l = i; l>=1; l--)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     for(int i = n-1; i>=1; i--)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         for(int k = 1; k<=2*(n-i); k++)
//         {
//             cout<<"  ";
//         }
//         for(int l = i; l>=1; l--)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// PATTERN 25
//    *    
//   * *   
//  * * *  
// * * * * 
// * * * * 
//  * * *  
//   * *   
//    *    
// #include <iostream>
// using namespace std;
// void printPattern(int n)
// {
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<" ";
//         };
//         for(int k = 1; k<=i; k++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     for(int i = n; i>=1; i--)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<" ";
//         };
//         for(int k = 1; k<=i; k++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printPattern(n);
//     return 0;
// };

// DECIMAL TO OCTAL
// int toBase(int n, int 8)
// {
//     float result = 0;
//     int count = 0;
//     while(n!=0)
//     {
//         int remainder = n%8;
//         result = pow(10,count)*remainder+result;
//         count++;
//         n/=8;
//     };
//     return result;
// };

// OCTAL TO DECIMAL
// int toDecimal(int n)
// {
//     int result = 0;
//     int count = 0;
//     while(n!=0)
//     {
//         int lastDigit = n%10;
//         result = pow(8,count)*lastDigit + result;
//         count++;
//         n/=10;
//     };
//     return result;
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<toDecimal(n)<<endl;
//     return 0;
// }

// DECIMAL TO ANY BASE CONVERTER
// int toBase(int n, int base)
// {
//     float result = 0;
//     int count = 0;
//     while(n!=0)
//     {
//         int remainder = n%base;
//         result = pow(10,count)*remainder+result;
//         count++;
//         n/=base;
//     };
//     return result;
// };

// ANY BASE TO DECIMAL CONVERTOR
// int toDecimal(int n)
// {
//     int result = 0;
//     int count = 0;
//     while(n!=0)
//     {
//         int lastDigit = n%10;
//         result = pow(8,count)*lastDigit + result;
//         count++;
//         n/=10;
//     };
//     return result;
// };

