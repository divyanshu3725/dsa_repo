#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// BINARY SEARCH
// int binarySearch(int arr[],int start , int end, int key)
// {
//     if(start>end)
//     {
//         return -1;
//     };
//     cout<<"running"<<endl;
//     int midInd = start + (end-start)/2;
//     int midElem = arr[midInd];
//     if(midElem<key)
//     {
//         return binarySearch(arr,midInd+1, end,key);
//     }
//     else if(midElem==key) 
//     {
//         return midInd;
//     }
//     else
//     {
//         return binarySearch(arr,start,midInd-1,key);
//     };
// };
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     cout<<binarySearch(arr,0,4,6)<<endl;
// };

// LINEAR SEARCH
// int linearSearch(int arr[],int n,int key)
// {   
//     if(n==0)
//     {
//         return 0;
//     };
//     if(arr[0]==key)
//     {
//         return 1;
//     };
//     return linearSearch(arr+1,n-1,key);
// };  
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     cout<<linearSearch(arr,5,7)<<endl;
// };

// ARRAY SUM 
// int arrSum(int arr[], int n)
// {
//     if(n==1)
//     {
//         return arr[0];
//     }
//     else
//     {
//         return arr[0] + arrSum(arr+1,n-1);
//     }
// };
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     cout<<arrSum(arr,5);
// }

// IS SORTED 
// bool isSorted(int arr[], int size)
// {
//     if(size==1)
//     {
//         return 1;
//     };
//     if (arr[0]<=arr[1])
//     {
//         return isSorted(arr+1,size-1);
//     };
//     return 0;
// };
// int main()
// {
//     int arr[5] = {1,2,3,4,4};
//     cout<<isSorted(arr,5)<<endl;
// };

// SAY DIGITS
// EXAMPLE 5
// string str(int n)
// {
//     if (n == 0)
//     {
//         return "zero";
//     }
//     else if (n == 1)
//     {
//         return "one";
//     }
//     else if (n == 2)
//     {
//         return "two";
//     }
//     else if (n == 3)
//     {
//         return "three";
//     }
//     else if (n == 4)
//     {
//         return "four";
//     }
//     else if (n == 5)
//     {
//         return "five";
//     }
//     else if (n == 6)
//     {
//         return "six";
//     }
//     else if (n == 7)
//     {
//         return "seven";
//     }
//     else if (n == 8)
//     {
//         return "eight";
//     }
//     else
//     {
//         return "nine";
//     };
// }
// string sayDigits(int n)
// {
//     if (n / 10 == 0)
//     {
//         return str(n % 10);
//     }
//     else
//     {
//         return sayDigits(n / 10) + " " + str(n % 10);
//     }
// };
// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "|" << sayDigits(n) << "|";
// };

// EXAMPLE 4 FIBONACCI SERIES
// int fibonacci(int n)
// {
//     if(n==1 || n==2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibonacci(n-1) + fibonacci(n-2);
//     };
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         cout<<fibonacci(i)<<endl;
//     };
// };

// FROM CODING NINJAS
// a recursive method solves a problem by calling a copy of itself to work on a smaller problem
// Recursion uses an in-built stack that stores recursive calls. Hence, the number of recursive calls must be as small as possible to avoid memory-overflow. If the number of recursion calls exceeded the maximum permissible amount, the recursion depth* will be exceeded. This condition is called stack overflow.

// EXTRA HOW TO WRITE SOME CODE THAT GET'S EXECUTED AFTER THE RECURSIVE CALL
// int printer(int n)
// {
//     if(n<=0)
//     {
//         return -1;
//     }
//     else
//     {
//         // cout<<n<<endl; // this will give 5 4 3 2 1
//         int result = printer(n-1);
//         cout<<n<<endl; // this will give 1 2 3 4 5
//         return result;
//     }
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printer(n);
// }

// EXAMPLE 3 PRINTER FUNCTION (FROM 1 TO N)
// void printer(int n)
// {
//     if (n == 0)
//     {
//         cout << 0 << endl;
//     }
//     else
//     {
//         cout << n << endl;
//         printer(n - 1);
//     }
// };
// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     printer(n);
// };

// EXAMPLE 2 POWER FUNCTION
// int power(int a, int b)
// {
//     if(b==0)
//     {
//         return 1;
//     }
//     return a * power(a,b-1);
// };
// int main()
// {
//     int a;
//     cout << "Enter the value of a: ";
//     cin >> a;
//     int b;
//     cout << "Enter the value of b: ";
//     cin >> b;
//     cout << power(a, b) << endl;
// };

// HEAD RECURSION
// RECURSION WITH THE FOLLOWING ORDER:
// BASE CASE
// RECURSIVE RELATION
// PROCESSING

// TAIL RECURSION
// RECURSION WITH THE FOLLOWING ORDER:
// BASE CASE
// PROCESSING
// RECURSIVE RELATION

// RECURSION FUNCTION PARTS:
// BASE CASE
// PROCESSING
// RECURSIVE RELATION

// RECURSION TREE
// [4] (returns 24)
//    [3] (returns 6)
//       [2] (returns 2)
//          [1] (returns 1)
//             [0] (returns 1)

// EXAMPLE 1 FACTORIAL FUNCTION
// int factorial(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     return n * factorial(n-1);
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<factorial(n)<<endl;
//     // IF WE DON'T SUPPLY THE BASE CASE THEN WE WILL GET A SEGMENTATION FAULT
//     // NOT SUPPLYING A BASE CASE WILL CAUSE STACK OVERFLOW
//     // BECAUSE THE STACK OVERFLOWS
//     // THE MAIN FUNCTION ENTERED THE STACK FIRST
//     // THEN NUMEROUS FACTORIAL STARTED ENTERING THE STACK
//     // FACTORIAL FUNCTIONS ARE ENTERING THE STACK ONE BY ONE
//     // STACK OVERFLOW!
// }

// INTORDUCTION TO RECURSION
// int main()
// {
//     // RECURSION IN PROGRAMMING REFERS TO THE TECHNIQUE IN WHICH A FUNCTION CALLS ITSELF IN ORDER TO SOLVE A PROBLEM
//     // 2^4 = 2 * 2^3 (THIS IS A RECURSIVE RELATION)
//     // EXAMPLE: FACTORIAL CALCULATOR FUNCTION
//     // WE NEED A BASE CASE SO THAT WE DON'T RUN INTO AN INFINITE LOOP
//     //
// };