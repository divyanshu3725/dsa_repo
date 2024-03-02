#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// HOMEWORK INVERSION CONTROL PROBLEM

// 🟨🟨 QUICK SORT
// IN QUICK SORT WE TAKE AN ELEMENT AND THEN PUT IT ON IT'S RIGHT POSITION
// SUCH THAT THE ELEMENTS ON THE LEFT OF THE ELEMENT ARE SMALLER THAN IT AND THE ELEMENTS ON THE RIGHT OF IT ARE GREATER THAN IT
// SC OF QUICK SORT IS O(n)
// TC OF QUCIK SORT IS O(n*log(n))
// TC IN WORST CASE IS O(n^2)
// #include<iostream>
// using namespace std;
// int partition( int arr[], int s, int e) {
//     int pivot = arr[s];
//     int cnt = 0;
//     for(int i = s+1; i<=e; i++) {
//         if(arr[i] <=pivot) {
//             cnt++;
//         }
//     }
//     //place pivot at right position
//     int pivotIndex = s + cnt;
//     swap(arr[pivotIndex], arr[s]);
//     //left and right wala part smbhal lete h 
//     int i = s, j = e;
//     while(i < pivotIndex && j > pivotIndex) {
//         while(arr[i] <= pivot) 
//         {
//             i++;
//         }
//         while(arr[j] > pivot) {
//             j--;
//         }
//         if(i < pivotIndex && j > pivotIndex) {
//             swap(arr[i++], arr[j--]);
//         }
//     }
//     return pivotIndex;
// }
// void quickSort(int arr[], int s, int e) {
//     //base case
//     if(s >= e) 
//         return ;
//     //partitioon karenfe
//     int p = partition(arr, s, e);
//     //left part sort karo
//     quickSort(arr, s, p-1);
//     //right wala part sort karo
//     quickSort(arr, p+1, e);
// }
// int main() {
//     int arr[8] = {5,4,3,2,1,6,6,7};
//     int n = 8;
//     quickSort(arr, 0, n-1);
//     for(int i=0; i<n; i++) 
//     {
//         cout << arr[i] << " ";
//     } cout << endl;
//     return 0;
// }

// 🟨🟨 RECURSIVE SELECTION SORT
// void selectionSort(vector<int> &vect, int ind)
// {
//     if (ind != vect.size() - 1)
//     {
//         int miNInd = ind;
//         for (int j = ind; j < vect.size(); j++)
//         {
//             if (vect[j] < vect[midInd])
//             {
//                 miNInd = j;
//             };
//         };
//         swap(vect[miNInd], vect[ind]);
//         selectionSort(vect, ind + 1);
//     };
// }

// 🟨🟨 RECURSIVE INSERTION SORT
// void insertionSort(vector<int> &vect, int ind)
// {
//     cout<<"for mainInd = "<<ind<<endl;
//     if (ind != vect.size())
//     {
//         int mainInd = ind;
//         for (int j = mainInd - 1; j >= 0; j--)
//         {
//             if (vect[j] > vect[mainInd])
//             {
//                 swap(vect[mainInd], vect[j]);
//                 mainInd = j;
//             };
//         };
//         selectionSort(vect, ind + 1);
//     };
// };

// 🟨🟨 MERGE SORT
// IS FASTER THAT SELECTION SORT, INSERTION SORT, BUBBLE SORT
// void mergeArr(int arr[], int start, int end)
// {
//     cout<<"mergeArr running"<<endl;
//     int mid = start + (end-start)/2;
//     int len1 = mid-start+1;
//     int len2 = end-mid;
//     int mainArrayIndex = start;
//     int *first = new int[len1];
//     int *second = new int[len2];
//     for(int i = 0; i<len1; i++)
//     {
//         first[i] = arr[mainArrayIndex++];
//     };
//     for(int i = 0; i<len2; i++)
//     {
//         second[i] = arr[mainArrayIndex++];
//     };
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = start;
//     while(index1<len1 && index2<len2)
//     {
//         if(first[index1]<second[index2])
//         {
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else
//         {
//             arr[mainArrayIndex++] = second[index2++];
//         };
//     };
//     while (index1<len1)
//     {
//         arr[mainArrayIndex++] = first[index1++];
//     };
//     while (index2<len2)
//     {
//         arr[mainArrayIndex++] = second[index2++];
//     };
// };
// void mergeSortThis(int arr[], int start, int end)
// {
//     cout<<"mergeSortThis running"<<endl;
//     if(start<end)
//     {
//         int mid = start + (end-start)/2;
//         mergeSortThis(arr,start,mid);
//         mergeSortThis(arr,mid+1,end);
//         mergeArr(arr,start,end);
//     };
// };
// int main()
// {
//     int arr[7] = {5,4,3,2,1,6,7};
//     mergeSortThis(arr,0,6);
//     for(int i = 0; i<7; i++)
//     {
//         cout<<arr[i]<<" ";
//     };
//     return 0;
// };

// 🟨🟨 RECURSIVE BUBBLE SORT
// void bubbleSort(vector<int> &vect, int end)
// {
//     // cout<<"running"<<endl;
//     if (end - 1 != 0)
//     {
//         for (int i = 0; i < end - 1; i++)
//         {
//             if (vect[i] > vect[i + 1])
//             {
//                 swap(vect[i], vect[i + 1]);
//             };
//         };
//         bubbleSort(vect,end-1);
//     };
// };

// 🟨🟨 POWER FUNCTION
// int power(int a, int b)
// {
//     cout<<"a is "<<a<<" b is "<<b<<endl;
//     if(b==0)
//     {
//         if(a==0)
//         {    
//             return 0;    
//         };
//         return 1;
//     };
//     int ans = power(a,b/2);
//     if(b%2==0)
//     {
//         return ans*ans;
//     }
//     else
//     {
//         return ans * ans * a;
//     };
// };
// int main()
// {
//     int a = 2;
//     int b = 8;
//     cout<<power(a,b)<<endl;
// };

// 🟩 REVERSE STRING USING RECURSION
// void reverseString(string &str,int start = 0)
// {
//     int end = str.length()-1-start;
//     // cout<<"start = "<<start<<" end = "<<end<<endl;
//     if(start<=end)
//     {
//         swap(str[start],str[end]);
//         reverseString(str,start+1);
//     };
// };
// int main()
// {
//     string str = "chinu";
//     cout<<str<<endl;
//     reverseString(str);
//     cout<<str<<endl;
//     return 0;
// };

// 🟩 RECURSIVE BINARY SEARCH
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

// 🟨🟨 RECURSIVE LINEAR SEARCH
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

// 🟨🟨 ARRAY SUM USING RECURSION
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
// int arrSum(int arr[],int n,int size)
// {
//     cout<<"for n = "<<n<<endl;
//     if(n<size-1)
//     {
//         return arr[n] + arrSum(arr,n+1,size);
//     }
//     else
//     {
//         return arr[n];
//     };
// };

// 🟨🟨 IS SORTED USING RECURSION
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

// 🟨🟨 SAY DIGITS USING RECURSION
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
// string sayDigits1(int n)
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
// void sayDigits2(int n)
// {
//     if(n/10==0)
//     {
//         cout<<str(n);
//     }
//     else
//     {
//         sayDigits2(n/10);
//         cout<<" "<<str(n%10);
//     };
// };

// 🟩 EXAMPLE 4 FIBONACCI SERIES
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

// 🟩 FROM CODING NINJAS
// a recursive method solves a problem by calling a copy of itself to work on a smaller problem
// Recursion uses an in-built stack that stores recursive calls. Hence, the number of recursive calls must be as small as possible to avoid memory-overflow. If the number of recursion calls exceeded the maximum permissible amount, the recursion depth* will be exceeded. This condition is called stack overflow.

// 🟩 EXAMPLE 3 PRINTER FUNCTION (FROM 1 TO N)
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

// 🟩 EXAMPLE 2 POWER FUNCTION
// int power(int a, int b)
// {
//     if(b==0)
//     {
//         return 1;
//     }
//     return a * power(a,b-1);
// };

// 🟩 HEAD RECURSION
// RECURSION WITH THE FOLLOWING ORDER:
// BASE CASE
// RECURSIVE RELATION
// PROCESSING
// void headPrint(int n)
// {
//     if(n!=0)
//     {
//         headPrint(n-1);
//     };
//     cout<<n<<endl;
// };

// 🟩 TAIL RECURSION
// RECURSION WITH THE FOLLOWING ORDER:
// BASE CASE
// PROCESSING
// RECURSIVE RELATION
// void tailPrint(int n)
// {
//     cout<<n<<endl;
//     if(n!=0)
//     {
//         tailPrint(n-1);
//     };
// };

// 🟩 RECURSION FUNCTION PARTS:
// BASE CASE
// PROCESSING
// RECURSIVE RELATION

// 🟩 RECURSION TREE
// [4] (returns 24)
//    [3] (returns 6)
//       [2] (returns 2)
//          [1] (returns 1)
//             [0] (returns 1)

// 🟩 EXAMPLE 1 FACTORIAL FUNCTION
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

// 🟩 INTORDUCTION TO RECURSION
// RECURSION IN PROGRAMMING REFERS TO THE TECHNIQUE IN WHICH A FUNCTION CALLS ITSELF IN ORDER TO SOLVE A PROBLEM
// 2^4 = 2 * 2^3 (THIS IS A RECURSIVE RELATION)
// EXAMPLE: FACTORIAL CALCULATOR FUNCTION
// WE NEED A BASE CASE SO THAT WE DON'T RUN INTO AN INFINITE LOOP