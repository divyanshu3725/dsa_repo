#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

string str(int n)
{
    if (n == 0)
    {
        return "zero";
    }
    else if (n == 1)
    {
        return "one";
    }
    else if (n == 2)
    {
        return "two";
    }
    else if (n == 3)
    {
        return "three";
    }
    else if (n == 4)
    {
        return "four";
    }
    else if (n == 5)
    {
        return "five";
    }
    else if (n == 6)
    {
        return "six";
    }
    else if (n == 7)
    {
        return "seven";
    }
    else if (n == 8)
    {
        return "eight";
    }
    else
    {
        return "nine";
    };
}
// bool sayDigits(int n)
// {
//     // cout<<"say digits running"<<endl;
//     // cout<<"running for "<<n<<endl;
//     if (n < 0)
//     {
//         return 0;
//     }
//     else if (n == 0)
//     {
//         // cout<<str(n);
//         return 0;
//     }
//     else
//     {
//         sayDigits(n / 10);
//         if (n / 10 == 0)
//         {
//             cout << str(n % 10);
//         }
//         else
//         {
//             cout << " " << str(n % 10);
//         }
//     };
// };
string sayDigits(int n)
{
    if (n / 10 == 0)
    {
        return str(n % 10);
    }
    else
    {
        return sayDigits(n / 10) + " " + str(n % 10);
    }
};
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "|" << sayDigits(n) << "|";
};

// EXAMPLE 3 FIBONACCI SERIES
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
//

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
// int printer(int n)
// {
//     if(n<=0)
//     {
//         return -1;
//     };
//     // cout<<n<<endl; // this will give 5 4 3 2 1
//     printer(n-1);
//     cout<<n<<endl; // this will give 1 2 3 4 5
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     printer(n);
// };

// EXAMPLE 2 POWER FUNCTION
// int power(int a, int b)
// {
//     if (a == 0)
//     {
//         return 0;
//     }
//     else if (a == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         if (b < 0)
//         {
//             cout << "Please enter a non negative power: ";
//             return -1;
//         }
//         else if (b == 0)
//         {
//             return 1;
//         }
//         else
//         {
//             return a * power(a, b - 1);
//         };
//     };
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
//     if(n<0)
//     {
//         cout<<"please enter a positive number!"<<endl;
//         return -1;
//     }
//     else if(n==0 || n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n*factorial(n-1);
//     };
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