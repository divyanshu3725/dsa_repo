// HOW ARE NEGATIVE NUMBER STORED IN MEMORY
// int a = -6;
// first: we will ignore -ve sign
// second: get binary of integer (get binary of 6)
// 6 is 110
// third: takes two's compilemtn of integer and store the result in memory
// for taking two's compliment first we take 1's compliment and then we add 1 to it
// 1's compliment of 6 will be 11111111111111111111111111111001
// adding 1 we get:            11111111111111111111111111111010
// now this 11111111111111111111111111111010 will be stored in the memory
// if an integer is +ve then the MSB in memory is +ve
// if an integer is -ve then the MSB in memory is -ve
// 11111111111111111111111111111010 has MSB as -ve

// HOW ARE NEGATIVE NUMBERS PRINTIED
// int a = -6;
// 11111111111111111111111111111010 is storing in memory
// MSB is 1 so we will keep a -ve sign reserved
// we will takes 2's compliment of 11111111111111111111111111111010
// 1's compliment comes out to be  00000000000000000000000000000101
// adding 1 to it we get           00000000000000000000000000000110
// 00000000000000000000000000000110 this corresponds to 6
// we have a -ve sign reserved
// so -6 will be printed

// WHAT PROBLEM DOES 2'S COMPLIMENT SOLVE  
// WE COULD HAVE MADE A CONVENTION THAT 0SOMETHING WILL BE +VE AND 1SOMETHING WILL BE -VE
// max would be 2^31-1
// min would be - (2^31 - 1)
// but this will cause 0 to have two representations
// so one representation is getting wasted
// to save this 2's compliment was invented
// since we have save one repersentation
// we will use this representation to store a negative number at the extreme end
// so range would be from - (2^31) to (2^31 - 1)

// SIGNED AND UNSIGNED
// for making unsigned we will do unsigned int a = 23;
// this will increase the range of the int (in +ve region)

// WHAT IF WE TRY TO STORE NEGATIVE VALUE IN UNSIGNED INT
// unsigned int a = -2;
// 2 correpsonds to 00000000000000000000000000000010
// 1's compliment:  11111111111111111111111111111101
// 2's compliment:  11111111111111111111111111111110
// now we will try to print this
// compiler won't take it's 2's compliment because we have said that it's +ve
// it will be directtly interpreted as a positive integer in base 10 (4294967294)
// it will print it without taking 2's compliment
// so it will get huge
// ----------------------------
// CODE
// #include <iostream>
// using namespace std;
// int main()
// {
//     unsigned int a = -2;
//     cout<<a<<endl;
//     return 0;
// };
// ----------------------------
// this will print 4294967294

// GUESS THE OUTPUT (IF ELSE CONDITIONALS)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 2;
//     int b = a+1;
//     if((a=3)==b){
//         cout<<"inside if "<<endl;
//         cout<<a<<endl;
//     }
//     else{
//         cout<<"inside else "<<endl;
//         cout<<a+1<<endl;
//     }
//     return 0;
// };

// QUESTION 1 SUPPLIED CHARACTER UPPERCASE OR LOWERCASE OR DIGIT
// #include <iostream>
// using namespace std;
// int main()
// {
//     char a;
//     cout<<"Enter the character: ";
//     cin>>a;
//     if(a>='a' && a<='z')
//     {
//         cout<<"lower case"<<endl;
//     }
//     else if (a>='A' && a<='Z')
//     {
//         cout<<"upper case"<<endl;
//     }
//     else if(a>='0' && a<='9')
//     {
//         cout<<"integer"<<endl;
//     }
//     else
//     {
//         cout<<"neither upper case nor lowercase nor integer"<<endl;
//     }
//     return 0;
// };

// QUESTION 2 FIND SUM OF ALL EVEN NUMBERS FROM 1 TO N
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
//         if(i%2==0)
//         {
//             sum+=i;
//         };
//     };
//     cout<<sum<<endl;
//     return 0;
// };

// QUESTION 3 PRIME OR NOT
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     if (n <= 0)
//     {
//         cout << "please enter positive number!" << endl;
//     }
//     else if (n == 1)
//     {
//         cout << "neither prime nor composite" << endl;
//     }
//     else
//     {
//         bool prime = true;
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 prime = false;
//                 break;
//             };
//         };
//         if (prime)
//         {
//             cout << "it is prime" << endl;
//         }
//         else
//         {
//             cout << "it is composite" << endl;
//         };
//     };
//     return 0;
// };

// NOT
// int a = ~2;
// 2 is  00000000000000000000000000000010
// ~2 is 11111111111111111111111111111101
// for printing 11111111111111111111111111111101 we will do two's compliment
// 1's compliment 00000000000000000000000000000010
// 2's compliment 00000000000000000000000000000011
// 00000000000000000000000000000011 correpsonds to 3
// -3 will printed because MSB of 11111111111111111111111111111101 is 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 2;
//     cout<<(~a)<<endl;
//     return 0;
// };

// DOING LEFT SHIFT ON LARGER NUMBERS WILL RETURN -VE NUMBERS

// GUESS THE OUTPUT1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = 2;
//     if(a-->0 && ++b>2)
//     {
//         cout<<"stage 1 inside if";
//     }
//     else
//     {
//         cout<<"stage 2 inside else";
//     };
//     cout<<endl;
//     cout<<a<<" "<<b<<endl;
//     return 0;
// };

// GUESS THE OUTPUT2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = 2;
//     if(a-->0 || ++b>2)
//     {
//         cout<<"stage 1 inside if";
//     }
//     else
//     {
//         cout<<"stage 2 inside else";
//     };
//     cout<<endl;
//     cout<<a<<" "<<b<<endl;
//     return 0;
// };

// GUESS THE OUTPUT3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int number = 3;
//     cout<<(25*(++number))<<endl;
//     return 0;
// };

// GUESS THE OUTPUT4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = a++;
//     int c = ++a;
//     cout<<b<<endl;
//     cout<<c<<endl;
//     return 0;
// };

// GUESS THE OUTPUT 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i = 0; i<=5; i++)
//     {
//         cout<<i<<" ";
//         i++;
//     };
//     return 0;
// };

// GUESS THE OUTPUT 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i = 0; i<=5; i--)
//     {
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// };

// GUESS THE OUTPUT 3
// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i = 0; i<=15; i+=2)
//     {
//         cout<<i<<" ";
//         if(i&1)
//         {
//             continue;
//         };
//         i++;
//     };
//     return 0;
// };

// GUESS THE OUTPUT 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i = 0; i<5; i++)
//     {
//         for(int j = i; j<=5; j++)
//         {
//             cout<<i<<" "<<j<<endl;
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// GUESS THE OUTPUT 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i = 0; i<5; i++)
//     {
//         for(int j = i; j<=5; j++)
//         {
//             if(i+j==10)
//             {
//                 break;
//             };
//             cout<<i<<" "<<j<<endl;
//         };
//     };
//     return 0;
// };

// DECIMAL TO BINARY
// DIVISION BY 2
// 2 4 0
// 2 2 0
// 2 1 1
//   0
// 2 7 1
// 2 3 1
// 2 1 1
//   0
// 2 2 0
// 2 1 1
//   0
// FIRST WAY (using division by 2 method) (using the pow function)
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// int binaryOf(int n)
// {
//     float result = 0;
//     int count = 0;
//     while(n!=0)
//     {
//         int remainder = n%2;
//         result += pow(10,count)*remainder;
//         count++;
//         n/=2;
//     };
//     return int(result);
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<binaryOf(n)<<endl;
//     return 0;
// };
// SECOND WAY (using division by 2 method) (without using the pow function)
// #include <iostream>
// using namespace std;
// int binaryOf(int n)
// {
//     int count = 1;
//     int result = 0;
//     while(n!=0)
//     {
//         int remainder = n%2;
//         if(count==1)
//         {
//             result += count*remainder;
//         }
//         else
//         {
//             result += count*remainder;
//         };
//         count*=10;
//         n/=2;
//     };
//     return result;
// };
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;  
//     cout<<binaryOf(n)<<endl;
//     return 0;
// };
// THIRD WAY (using the bit manipulation method) (without using the pow function)
// #include <iostream>
// using namespace std;
// int binaryOf(int n)
// {
//     int count = 1;
//     int result = 0;
//     while(n!=0)
//     {
//         int lastVBit = n&1;;
//         if(count==1)
//         {
//             result += count*lastVBit;
//         }
//         else
//         {
//             result += count*lastVBit;
//         };
//         count*=10;
//         n>>=1;
//     };
//     return result;
// };
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;  
//     cout<<binaryOf(n)<<endl;
//     return 0;
// };
// FOURTH WAY (using the bit manipulation method) (using pow function)
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// int binaryOf(int n)
// {
//     float result = 0;
//     int count = 0;
//     while(n!=0)
//     {
//         int lastBit = n&1;
//         result += pow(10,count)*lastBit;
//         count++;
//         n>>=1;
//     };
//     return result;
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<binaryOf(n)<<endl;
//     return 0;
// };

// BINARY TO DECIMAL
// #include <iostream>
// #include <algorithm>
// #include <cmath>
// #include <vector>
// using namespace std;
// int decimalOf(int n)
// {
//     float result = 0;
//     int count = 0;
//     while(n!=0)
//     {
//         int lastBit = n%10;
//         result += pow(2,count)*lastBit;
//         count++;
//         n/=10;
//     };
//     return int(result);
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<decimalOf(n)<<endl;
//     return 0;
// };

// TIME COMPLEXITY
// amount of time taken by an algorithm to run as a function of length of input
// why do we need complexities:
// - to compare algorithm
// - for making better programs
// Big O Notation for upper bound worst case scenario
// Theta Notation for middle bound average case scenario
// Omega Notation for lower bound best case scenario
// O(1) for constant time
// O(n) for linear time
// O(logn) for logarithmic time
// O(n^2) for quadratic time
// O(n^3) for cubic time
// O(1) < O(logN) < O(N) < O(NlogN) < O(N^2) < O(N^3) < O(2^n) < O(N!)
// f(n) -> 2(n^2) + 3(n) -> O(n^2)
// f(n) -> 4(n^4) + 3(n^3) -> O(n^4)
// f(n) -> (n^2) + logN -> O(n^2)
// f(n) -> 200 -> O(1)
// f(n) -> 3(n^3) + 2(n^2) + 5 -> O(n^3)
// f(n) -> (n^3)/300 -> O(n^3)
// f(n) -> 5(n^2) + logN -> O(n^2)
// f(n) -> n/4 -> O(n)
// f(n) -> n+4/4 -> O(n)
// time complexity of print array function will be O(n)
// time complexity of reverse array function will be O(n) (actally n/2)
// time complexity of linear search in an array O(n)
// time complexity of the following code
// int a = 0;
// for(i = 0; i<N; i++)
// {
//     for(j = N; j>i; j--)
//     {
//         a = a + i + j;
//     };
// };
// N = 1; 1
// N = 2; 2 1
// N = 3; 3 2 1
// so for N = n; loop will run ((n^2) + n)/2 so TC = O(n^2)
// simple method is to just do calculation for the worst case
// for worst case N = n and i = 0; loop will run (n^2) times
// TC for max in array and min in array will be O(n)
// TC for isPrime function will be O(n) (actually n-2)

// TLE
// Most modern machines can perform 10^8 operations/second
// n < 11 : O(n!) , O(n^6)
// n < 18: O((2^n)*(n^2))
// n < 100 : O(n^4)
// n < 400 : O(n^3)
// n < 2000 : O((n^2)*log(n))
// n < 10^4 : O(n^2)
// n < 10^6 : O(n*log(n))
// n < 10^8 : O(n) , O(logn)

// SPACE COMPLEXITY
// amount of time taken by an algorithm to run as a function of length of input
// example 1
// int a = 0, b = 0;
// for(i = 0; i < N; i++)
// {
//     a = a + rand();
// }
// for(j = 0; j < M; j++)
// {
//     b = b + rand();
// }
// SC is O(1)
// example 2
// int a = 0, b = 0;
// for(i = 0; i < N; i++)
// {
//     for(j = 0; j < N; j++)
//     {
//         a = a + j;
//     }
// }
// for(k = 0; k < N; k++)
// {
//     b = b + k;
// }
// SC is O(1)
// example 3
// int a = 0;
// for(i = 0; i < N; i++)
// {
//     for(j = N; j > i; j--)
//     {
//         a = a + i + j;
//     };
// };
// SC is O(1)
// example 4
// func()
// {
//     int arr[5] = {1,2,3,4,5};
//     // cod with O(1)
// };
// SC is O(1) (because the size has been fixed)
// example 5
// int n;
// cin>>n;
// vector<int> vect[n];
// SC is O(n)
// example 6
// for(0 to n)
// {
//     vector <int> vect[n];
//     for(0 to n)
//     {
//         // code
//     }
// }
// SC is O(n)
// for loop time khaaega
// vector space khaaega
// TC calculate karte wakt vector ke size ko nahi dekhne ka
// SC calculate karte wakt for ke limit ko nahi dekhne ka

// ARRAYS
// arrays in c++ can store only similar type of items
// elements in an array are stored in contagious memory locations
// #include <iostream>
// using namespace std;
// int main()
// {
//     // char arr[6] = {'a','b','c','d','e'};
//     // or
//     // cout<<"value at address "<<"arr"<<" ("<<arr<<")"<<" is "<<*(arr)<<endl;
//     // cout<<"value at address "<<"arr+1"<<" ("<<arr+1<<")"<<" is "<<*(arr+1)<<endl;
//     // cout<<"value at address "<<"arr+2"<<" ("<<arr+2<<")"<<" is "<<*(arr+2)<<endl;
//     // cout<<"value at address "<<"arr+3"<<" ("<<arr+3<<")"<<" is "<<*(arr+3)<<endl;
//     // cout<<"value at address "<<"arr+4"<<" ("<<arr+4<<")"<<" is "<<*(arr+4)<<endl;
//     char arr[3] = {'a'};
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     return 0;
// };

// ARRAY UTILITY FUNCTIONS

// PRINT ARRAY
// #include <iostream>
// using namespace std;
// void printArray(int arr[], int n)
// {
//     for(int i = 0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     };
//     cout<<endl;
// };

// MAXELEMENT
// int maxElement(int arr[], int n)
// {
//     int maxElem = INT32_MIN;
//     for(int i = 0; i<n; i++)
//     {
//         if(arr[i]>maxElem)
//         {
//             maxElem = arr[i];
//         };
//     };
//     return maxElem;
// };

// MINELEMENT
// int minElement(int arr[], int n)
// {
//     int minElem = INT32_MAX;
//     for(int i = 0; i<n; i++)
//     {
//         if(arr[i]<minElem)
//         {
//             minElem = arr[i];
//         };
//     };
//     return minElem;
// };

// INPUTARRAYELEMENTS
// void inputArrayElement(int arr[], int n)
// {
//     for(int i = 0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
// };

// SUMOFELEMENTS
// int sumOfElements(int arr[], int n)
// {
//     int sum = 0;
//     for(int i = 0; i<n; i++)
//     {
//         sum+=arr[i];
//     };
//     return sum;
// }

// REVERSE ARRAY BRUTEFORCE
// void reverseArray1(int arr[], int n)
// {
//     int limit = n/2;
//     for(int i = 0; i<limit; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     };
// };

// REVERSE ARRAY OPTIIZED
// void reverseArray2(int arr[], int n)
// {
//     int start = 0;
//     int end = n-1;
//     while(start!=end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     };
// };

// INBUILT FUNCTIONS:
// MIN_ELEMENT and MAX_ELEMENT (belong to the algorithm header file)
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int arr[] = {2,4,1,5,3};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<*(min_element(arr,arr+size))<<endl;
//     cout<<*(max_element(arr,arr+size))<<endl;
//     return 0;
// };

// MAX and MIN functions
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     cout<<max(1,2)<<endl;
//     cout<<min(1,2)<<endl;
// };

// INSIDER INFORMATION ABOUT ARRAYS
// if array has 5 elements, but we have initialized only 3 values, then accessing the 4th of 5th element of an array using cout<<arr[4]<<endl; will print garbage value
// but if we pass this array to the printArray function, then 0s are printed

// WHY DO WE NEED TO PASS SIZE OF ARRAY EXPLICTLY
// because amount of space alloted to an array might be larger than the space used
// while printing the array we need to specify the amount of space used by the array and not the amount of space alloted to the array

// VARIABLES ARE PASSED BY VALUE, BUT ARRAYS ARE PASSED BY REFERENCE

// LINEAR SEARCH 
// has TC O(n)
// bool linearSearch(int arr[], int n, int num)
// {
//     for(int i = 0; i<n; i++)
//     {
//         if(arr[i]==num)
//         {
//             return true;
//         };
//     };
//     return false;
// };

// BINARY SEARCH 
// for linear search the TC is O(n)
// binary search is applied only on monotoning functions
// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size-1;
//     while(start<=end)
//     {
//         cout<<"startElem is "<<arr[start]<<endl;
//         cout<<"endElem is "<<arr[end]<<endl;
//         int midInd = start + (end-start)/2;
//         int midElem = arr[midInd];
//         cout<<"midElem is "<<midElem<<endl;
//         if(key<midElem)
//         {
//             end = midInd-1;
//         }
//         else if (key==midElem)
//         {
//             return midInd;
//         }
//         else
//         {
//             start = midInd + 1;
//         };
//     };
//     return -1;
// };
// int main()
// {
//     int arr[] = {1,2,3,4,5,6};
//     int key = 6;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<binarySearch(arr,size,key)<<endl;
//     return 0;
// };
// why we shouldn't use s+e/2
// because if s = e = 2^31 - 1
// so we need to use s + (e-s)/2
// for binary search TC is O(log2(n))

// SELECTION SORT
// in selection sort we select the smallest element and send them to their original position
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// void selectionSort(vector<int> vect)
// {
//     for (int i = 0; i < vect.size()-1; i++)
//     {
//         int minInd = i;
//         for (int j = i; j < vect.size(); j++)
//         {
//             if (vect[j] < vect[minInd])
//             {
//                 minInd = j;
//             };
//         };
//         swap(vect[i], vect[minInd]);
//         for (int i = 0; i < vect.size(); i++)
//         {
//             cout << vect[i] << " ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     // vector<int> vect = {64, 25, 12, 22, 11};
//     vector<int> vect = {1, 7, 9, 2, 3, 0};
//     for (int i = 0; i < vect.size(); i++)
//     {
//         cout << vect[i] << " ";
//     };
//     cout << endl;
//     selectionSort(vect);
//     return 0;
// };
// COMPLIEXITIES OF SELECTION SORT
// space complexity of this is O(1)
// time complexity of this is O(n^2)
// best case and worst case complexities are O(n^2)
// USE CASES
// - use it for sorting arrays and vector of small size

// BUBBLE SORT
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// void bubbleSort(vector<int> vect)
// {
//     for (int i = 0; i < vect.size() - 1; i++)
//     {
//         bool swapping = false;
//         for (int j = 0; j < vect.size() - 1 - i; j++)
//         {
//             int firstElem = vect[j];
//             int secondElem = vect[j + 1];
//             if (secondElem < firstElem)
//             {
//                 swapping = true;
//                 swap(vect[j], vect[j + 1]);
//             };
//         };
//         for (int k = 0; k < vect.size(); k++)
//         {
//             cout << vect[k] << " ";
//         };
//         cout << endl;
//         if(!swapping)
//         {
//             break;
//         };
//     };
// };
// int main()
// {
//     // vector<int> vect = {10, 1, 7, 6, 14, 9};
//     // vector<int> vect = {5, 4, 3, 2, 1};
//     vector<int> vect = {1,2,3,4,5};
//     for (int i = 0; i < vect.size(); i++)
//     {
//         cout << vect[i] << " ";
//     };
//     cout << endl;
//     bubbleSort(vect);
//     return 0;
// };
// COMPLEXITIES
// code runs: n-1 n-2 n-3 ...1 times = n(n-1)/2
// time complexity is O(n^2)
// space complexity is O(1)
// best case complexity is O(n) discussed belong
// OPTIMIZATIONS
// we will maintina a bool variable through which we will check if some swaps are required or not
// if swaps are not required than means array has been sorted so we would break from the loop
// IF ARRAYS IS ALREADY SORTED
// we will be running n-1 times so O(n) will be the complexity for best case scenario
// USE CASES

// INSERTION SORT
// EXAMPLE
// 11 1 7 4 8 2 10
// 1 11 7 4 8 2 10
// 1 7 11 4 8 2 10
// 1 4 7 11 8 2 10
// 1 4 7 8 11 2 10
// 1 2 4 7 8 11 10
// 1 2 4 7 8 10 11
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// void insertionSort(vector<int> vect)
// {
//     for(int i = 1; i<vect.size(); i++)
//     {
//         int checkInd = i;
//         for(int j = i-1; j>=0; j--)
//         {
//             // cout<<"i = "<<i<<" j = "<<j<<endl;
//             if(vect[checkInd]<vect[j])
//             {
//                 // cout<<"swap"<<endl;
//                 swap(vect[checkInd],vect[j]);
//                 checkInd = j;
//             }
//             else
//             {
//                 break;
//             };
//         };
//     for (int k = 0; k < vect.size(); k++)
//     {
//         cout << vect[k] << " ";
//     };
//     cout << endl;
//     }
// };
// int main()
// {
//     vector<int> vect = {5, 4, 3, 2, 1};
//     for (int i = 0; i < vect.size(); i++)
//     {
//         cout << vect[i] << " ";
//     };
//     cout << endl;
//     insertionSort(vect);
//     return 0;
// };
// USE CASES
// - it is very adabptable algorithm
// - it is stable algorithm
// - if n is small then this is better algorithm
// COMPLEXITIES
// - code runs: 1 2 3 ..n-1 = (n)(n-1)/2
// - time complexity is O(n^2)
// - space complexity is O(1)
// - best case complexity is O(n) (runs n-1 times)

// STL ARRAY
// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {
//     // BASIC ARRAY
//     // int arr[5] = {1,2,3,4};
//     // STL ARRAY
//     // requires the array header file
//     // array <int,4> arr = {1,2,3,4};
//     // array stl is implemented using static array of fixed size
//     // so we don't use it
//     // TAKING IT'S SIZE
//     // array <int,4> arr = {1,2,3,4};
//     // cout<<arr.size()<<endl;
//     // ACCESSING AN ELEMENT
//     // array <int,4> arr = {1,2,3,4};
//     // cout<<arr[0]<<endl;
//     // USING THE AT METHOD
//     // array <int,4> arr = {1,2,3,4};
//     // cout<<arr.at(2)<<endl;
//     // CHECK IF ARRAY IS EMPTY OR NOT
//     // array <int,4> arr = {1,2,3,4};
//     // cout<<arr.empty()<<endl;
//     // TAKING THE FIRST AND THE LAST ELEMENT
//     // array <int,4> arr = {1,2,3,4};
//     // cout<<arr.front()<<endl;
//     // cout<<arr.back()<<endl;
//     // TIME COMPLEXITY FOR ACCESSING AN ELEMENT IS O(1)
//     return 0;
// };

// STL VECTOR
// needs the vector header file
// VECTOR IS DYNAMIC
// it's size can be reduced and increased
// if we try to store more elements than the size it can hold
// it will make a new vector of double size
// then the contents of the older vector (whose size wasn't sufficient to hold another element) will be copied inside the new vector
// and then the new element will be added to the new vector
// time complexity for accessing an element is O(1)

// CAPACITY FUNCTION (STL VECTOR)
// for finding the space occupied by a function
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vect;
//     cout<<vect.capacity()<<endl;
//     vect.push_back(1);
//     cout<<"after pushing 1"<<endl;
//     cout<<vect.capacity()<<endl;
//     vect.push_back(2);
//     cout<<"after pushing 2"<<endl;
//     cout<<vect.capacity()<<endl;
//     vect.push_back(3);
//     cout<<"after pushing 3"<<endl;
//     cout<<vect.capacity()<<endl;
//     vect.push_back(4);
//     cout<<"after pushing 4"<<endl;
//     cout<<vect.capacity()<<endl;
//     vect.push_back(5);
//     cout<<"after pushing 5"<<endl;
//     cout<<vect.capacity()<<endl;
//     vect.push_back(6);
//     cout<<"after pushing 6"<<endl;
//     cout<<vect.capacity()<<endl;
//     vect.push_back(7);
//     cout<<"after pushing 7"<<endl;
//     cout<<vect.capacity()<<endl;
//     vect.push_back(8);
//     cout<<"after pushing 8"<<endl;
//     cout<<vect.capacity()<<endl;
//     vect.push_back(9);
//     cout<<"after pushing 9"<<endl;
//     cout<<vect.capacity()<<endl;
//     return 0;
// };

// SIZE FUNCTION (STL VECTOR)
// for finding the size of a function
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vect = {1,2,3,4};
//     cout<<vect.size()<<endl;
//     return 0;
// };

// PUSH_BACK FUNCTION(STL VECTOR)
// for inserting a new element at the end of a vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vect = {1,2,3,4};
//     for(int i = 0; i<vect.size(); i++)
//     {
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
//     vect.push_back(9);
//     for(int i = 0; i<vect.size(); i++)
//     {
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
//     return 0;
// };

// FRONT & BACK FUNCTIONS (STL VECTOR)
// for getting the first and last element
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vect = {1,2,3,4};
//     cout<<vect.front()<<endl;
//     cout<<vect.back()<<endl;
//     return 0;
// };

// POP_BACK FUNCTION (STL VECTOR)
// for dropping the last element
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vect = {1,2,3,4};
//     for(int i = 0; i<vect.size(); i++)
//     {
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
//     vect.pop_back();
//     for(int i = 0; i<vect.size(); i++)
//     {
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
//     return 0;
// };

// CLEAR FUNCTION (STL VECTOR)
// for clearing a vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vect = {1,2,3,4};
//     cout<<"capacity is "<<vect.capacity()<<endl;
//     cout<<"size is "<<vect.size()<<endl;
//     for(int i = 0; i<vect.size(); i++)
//     {
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
//     vect.clear();
//     cout<<"capacity is "<<vect.capacity()<<endl;
//     cout<<"size is "<<vect.size()<<endl;
//     for(int i = 0; i<vect.size(); i++)
//     {
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
//     return 0;
// };

// BEGIN AND END ITERATORS (STL VECTOR)
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vect = {1,2,3,4};
//     auto beginIter = vect.begin();
//     auto endIter = vect.end();
//     cout<<"begin iterator points to "<<*(beginIter)<<endl;
//     cout<<"end iterator points to "<<*(endIter)<<endl;
//     cout<<"end iterator - 1 points to "<<*(endIter-1)<<endl;
//     return 0;
// };

// INITIALIZING A VECTOR IN WHICH ALL THE ELEMENTS ARE SET TO n (STL VECTOR)
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vect(5,2);
//     for(int i = 0; i<vect.size(); i++)
//     {
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
//     return 0;
// };

// COPYING A VECTOR INTO ANOTHER VECTOR
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vect1 = {1,2,3,4};
//     vector<int> vect2(vect1);
//     for(int i = 0; i<vect2.size(); i++)
//     {
//         cout<<vect2[i]<<" ";
//     };
//     cout<<endl;
//     return 0;
// };

// STL DEQUEQUE OR DECK DOUBLE ENDED QUEUE
// #include <iostream>
// #include <deque>
// using namespace std;
// int main()
// {
//     // DEQUEQUE
//     // needs the dequeque header file
//     // we can perform push and pop operations at the end and at the beginning
//     // data isn't stored in contagious memory locations
//     // it is also dynamic
//     // random access is possible
//     // PUSH_BACK AND PUSH_FRONT OPERATIONS
//     // deque<int> a;
//     // a.push_back(1);
//     // a.push_back(2);
//     // a.push_back(3);
//     // for(int i = 0; i<a.size(); i++)
//     // {
//     //     cout<<a[i]<<" ";
//     // };
//     // a.push_front(9);
//     // for(int i = 0; i<a.size(); i++)
//     // {
//     //     cout<<a[i]<<" ";
//     // };
//     // POP_BACK AND POP_FRONT OPERATIONS
//     // deque<int> a;
//     // a.push_back(1);
//     // a.push_back(2);
//     // a.push_back(3);
//     // a.push_back(4);
//     // a.push_back(5);
//     // a.pop_front();
//     // for(int i = 0; i<a.size(); i++)
//     // {
//     //     cout<<a[i]<<" ";
//     // };
//     // a.pop_back();
//     // cout<<endl;
//     // for(int i = 0; i<a.size(); i++)
//     // {
//     //     cout<<a[i]<<" ";
//     // };
//     // ACCESSING ELEMENT
//     // deque<int> a;
//     // a.push_back(1);
//     // a.push_back(2);
//     // a.push_back(3);
//     // a.push_back(4);
//     // a.push_back(5);
//     // cout<<a.at(1)<<endl;
//     // FRONT AND BACK
//     // deque<int> a;
//     // a.push_back(1);
//     // a.push_back(2);
//     // a.push_back(3);
//     // a.push_back(4);
//     // a.push_back(5);
//     // cout<<a.front()<<endl;
//     // cout<<a.back()<<endl;
//     // EMPTY METHOD
//     // deque<int> a;
//     // cout<<a.empty()<<endl;
//     // a.push_back(1);
//     // a.push_back(2);
//     // a.push_back(3);
//     // a.push_back(4);
//     // a.push_back(5);
//     // cout<<a.empty()<<endl;
//     // BEGIN AND END ITERATORS
//     // deque<int> a;
//     // a.push_back(1);
//     // a.push_back(2);
//     // a.push_back(3);
//     // a.push_back(4);
//     // a.push_back(5);
//     // cout<<*(a.begin())<<endl;
//     // cout<<*(a.end()-1)<<endl;
//     // ERASE FUNCTION
//     // deque<int> a;
//     // a.push_back(1);
//     // a.push_back(2);
//     // a.push_back(3);
//     // a.push_back(4);
//     // a.push_back(5);
//     // for(int i = 0; i<a.size(); i++)
//     // {
//     //     cout<<a[i]<<" ";
//     // };
//     // cout<<endl;
//     // a.erase(a.begin(),a.begin()+1);
//     // for(int i = 0; i<a.size(); i++)
//     // {
//     //     cout<<a[i]<<" ";
//     // };
//     // cout<<endl;
//     // IF WE ERASE THE DEQUE COMPLETELY
//     // then the size becomes zero
//     // but the memory allocated to the deque remains the same
//     // LIST
//     return 0;
// };

// STL LIST
// stl list is implemented using the doubly linked list
// we cannot access the elements directly, we need to traverse to that element
// we need to include the list header file
// #include <iostream>
// #include <list>
// using namespace std;
// int main()
// {
//     // PUSH_BACK AND PUSH_FRONT OPERATION
//     list <int> l;
//     l.push_back(1);
//     l.push_back(2);
//     l.push_back(3);
//     l.push_back(4);
//     l.push_front(5);
//     // for(int i:l)
//     // {
//     //     cout<<i<<" ";
//     // };
//     // POP_BACK POP_FRONT OPERATIONS
//     // for(int i:l)
//     // {
//     //     cout<<i<<" ";
//     // };
//     // cout<<endl;
//     // l.pop_back();
//     // for(int i:l)
//     // {
//     //     cout<<i<<" ";
//     // };
//     // cout<<endl;
//     // l.pop_front();
//     // for(int i:l)
//     // {
//     //     cout<<i<<" ";
//     // };
//     // SIZE FUNCTION
//     // cout<<l.size()<<endl;
//     // COPYING A LIST INTO ANOTHER LIST
//     // list<int> l1(l);
//     // for(int i:l)
//     // {
//     //     cout<<i<<" ";
//     // };
//     // cout<<endl;
//     // INTIALIZING A LIST WITH ALL THE ELEMENTS AS 1
//     // list<int> l1(5,100);
//     // for(int i:l1)
//     // {
//     //     cout<<i<<" ";
//     // };
//     return 0;
// };

// STL STACK
// last in first out
// needs the stack header file
// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     // PUSHING ELEMENTS
//     stack<string> s;
//     cout<<s.empty()<<endl;
//     s.push("first");
//     s.push("second");
//     s.push("third");
//     // ACCESSING THE FIRST ELEMENT
//     cout<<s.top()<<endl;
//     // CHECKING WHETHER STACK IS EMPTY OR NOT
//     cout<<s.empty()<<endl;
//     // FINDING THE SIZE OF AN ELEMENT
//     cout<<s.size()<<endl;
//     return 0;
// };

// STL QUEUE
// first in first out
// needs the queue header file
// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     queue <string> q;
//     cout<<"is it empty "<<q.empty()<<endl;
//     // PUSHING ELEMENTS TO IT
//     q.push("first");
//     q.push("second");
//     q.push("third");
//     // ACCESSGING THE FIRST ELEMENT
//     cout<<"first element is "<<q.front()<<endl;
//     // POPPING ELEMENTS
//     // popping is done from the front only
//     q.pop();
//     cout<<"first element is "<<q.front()<<endl;
//     // ACCESSING THE SIZE OF QUEUE
//     cout<<q.size()<<endl;
//     // EMPTY FUNCTION
//     cout<<"is it empty "<<q.empty()<<endl;
//     return 0;
// };

// MATHS FOR DSA

// CHECK IF PRIME (sieve of Eratosthenes)
// time taken is: n/2 + n/3 + n/5 + n/7 + n/11 + n/13 + n/17 + n/19
// n(SUM of hp of prime numbers)
// n*log(logN)

// FIND GCD USING EUCLID'S ALGORITHM)
// EUCLID'S ALGORITHM
// gcd(a,b) = gcd(a-b,b);
// lcm(a,b) * gcd(a,b) = a*b;
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// FIRST APPROACH (MY APPROACH)
// int gcd(int a, int b)
// {
//     if (a == 0)
//     {
//         return b;
//     }
//     else if (b == 0)
//     {
//         return a;
//     }
//     else
//     {
//         int maxi = max(a, b);
//         int mini = min(a, b);
//         int count = 0;
//         while (maxi != 0 && mini != 0)
//         {
//             cout << "count is " << count << endl;
//             count++;
//             int temp = maxi - mini;
//             maxi = max(temp, mini);
//             mini = min(temp, mini);
//         };
//         if (maxi == 0)
//         {
//             return mini;
//         }
//         else
//         {
//             return maxi;
//         };
//     };
// };
// SECOND APPROACH (SIRS APPROACH)
// int gcd(int a, int b)
// {
//     if(a==0)
//     {
//         return b;
//     }
//     else if (b==0)
//     {
//         return a;
//     }
//     else
//     {
//         while (a!=b)
//         {
//             if(a>b)
//             {
//                 a = a-b;
//             }
//             else
//             {
//                 b = b-a;
//             };
//         }
//         return b;
//     };
// }
// int main()
// {
//     int n, m;
//     cout << "Enter the numbers: ";
//     cin >> n >> m;
//     cout << gcd(n, m) << endl;
//     return 0;
// };

// MODULO ARITHMETICS
// (a+b)%m = a%m + b%m
// (a-b)%m = a%m - b%m
// (a*b)%m = a%m * b%m
// (a*b)%m = a%m * b%m

// FAST EXPONENTIATION
// a^b  = (a^(b/2))^2 if b is even
// a^b = (a^((b-1)/2))^2 * a if b is odd
// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<cmath>
// using namespace std;
// int method1(int a, int n)
// {
//     int count = 1;
//     float prod = 1;
//     for(int i = 1; i<=n; i++)
//     {
//         cout<<"count "<<count<<endl;
//         count++;
//         prod*=a;
//     };
//     return prod;
// };
// int method2(int a, int n)
// {
//     // int count = 1;
//     float prod = 1;
//     if(n%2==0)
//     {
//         for(int i = 1; i<=n/2; i++)
//         {
//         // cout<<"count "<<count<<endl;
//         // count++;
//             prod*=a;
//         };
//         return prod*prod;
//     }
//     else
//     {
//         for(int i = 1; i<=(n-1)/2; i++)
//         {
//         // cout<<"count "<<count<<endl;
//         // count++;
//             prod*=a;
//         };
//         return prod*prod*a;
//     }
// };
// int main()
// {
//     int a;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"method1 result "<<" = "<<method1(a,n)<<endl;
//     cout<<"method2 result "<<" = "<<method2(a,n)<<endl;
// }

// MODULAR EXPONENTIATION (DOUBT)
// https://www.codingninjas.com/studio/problems/modular-exponentiation_1082146

// POINTER
// int num = 5;
// cout<<num<<endl;
// HOW DOES NUM REFERENCE TO A PARTICULAR ADDRESS?
// memory has a symbol table
// symbol table is an important data structure, created, and maintained by the compiler in order to keep track of the semantics of variable
// this symbol table stores the mapping of identifiers and the correpsonding addresses
// and this is how we are able to print the varialbe stored at the address which is referenced using the name num
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 5;
//     cout<<num<<endl;
//     cout<<&num<<endl;
//     return 0;
// };
// & is the address of operator, using it we can see the address
// WHY DO WE NEED POINTERS?
// pointers are using to store addresses
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 5;
//     int *numPtr = &num;
//     cout<<numPtr<<endl;
//     cout<<&num<<endl;
//     cout<<*numPtr<<endl;
//     cout<<num<<endl;
//     // the numPtr pointer is storing the address of the num
//     return 0;
// };
// int *p is the syntax
// - p is a pointer to an int data type
// cout<<*p<<endl;
// - here the * is the dereference operator
// - so it will print the value stored at the address p
// numPtr and &num are same
// *numPtr and num are same
// SIZE OF POINTER (INT)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 2345;
//     int *ptr = &num;
//     cout<<"size of pointer is "<<sizeof(ptr)<<endl;
//     return 0;
// };
// PLAYING WITH POINTER
// #include <iostream>
// using namespace std;
// int main()
// {
//     // int *p;
//     // cout<<"address is "<<p<<endl;
//     // cout<<"value is "<<*p<<endl;
//     // THIS IS A BAD PRACTICE
//     // int *p = 0;
//     // cout<<"address is "<<p<<endl;
//     // cout<<"value is "<<*p<<endl;
//     // THIS WILL THROW A SEGMENTATION FAULT
//     // int i = 2;
//     // int *p = 0;
//     // p = &i;
//     // int *q = &i;
//     // cout<<"the address that p stores is "<<p<<endl;
//     // cout<<"the address that q stores is "<<q<<endl;
//     // BOTH ARE SAME
//     // int num = 5;
//     // int a = num;
//     // a++;
//     // cout<<"value of num is "<<num<<endl;
//     // cout<<"value of a is "<<a<<endl;
//     // updating a won't update num 
//     // int num = 5;
//     // int *a = &num;
//     // (*a)++;
//     // cout<<"value of num is "<<num<<endl;
//     // cout<<"value of a is "<<*a<<endl;
//     // this will update the num also
//     return 0;
// };
// COPYING A POINTER
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 2;
//     int *p = &num;
//     int *q = p;
//     cout<<"the address that p correponds to is "<<p<<endl;
//     cout<<"the address that q correponds to is "<<q<<endl;
//     // both p and q correspong to the same address
//     return 0;
// };
// POINTER ARITHMETIC
// #include <iostream>
// using namespace std;
// int main()
// {
//     // int i = 3;
//     // int *p = &i;
//     // cout<<(*p)++<<endl;
//     // cout<<(*p)--<<endl;
//     // cout<<(*p)<<endl;
//     // SECOND EXAMPLE: 
//     int i = 3;
//     int *p = &i;
//     int *q = p + 1;
//     int *r = p - 1;
//     cout<<"p is "<<p<<endl;
//     cout<<"q is "<<q<<endl;
//     cout<<"r is "<<r<<endl;
//     return 0;
// };

// POINTERS IN ARRAY
// the name of an array references to first element of the array
// #include <iostream>
// using namespace std;
// int main()
// {
//     // BASICS
//     // int arr[5] = {5,4,3,2,1};
//     // cout<<"value at "<<arr<<" is "<<*(arr)<<endl;
//     // cout<<"value at "<<arr+1<<" is "<<*(arr+1)<<endl;
//     // cout<<"value at "<<arr+2<<" is "<<*(arr+2)<<endl;
//     // cout<<"value at "<<arr+3<<" is "<<*(arr+3)<<endl;
//     // cout<<"value at "<<arr+4<<" is "<<*(arr+4)<<endl;
//     // PLAYING
//     // int arr[5] = {5,4,3,2,1};
//     // cout<<"value at "<<arr<<" is "<<*(arr)<<endl;
//     // int *ptr = &(arr[0]);
//     // cout<<"value at "<<arr<<" is "<<*(ptr)<<endl;
//     // arr and &(arr[0]) and &arr point to same location in memory
//     // HOW DOES ARR[I] POINT TO AN ELEMENT
//     // arr[i] = *(arr + i)
//     // I[ARR] = *(i + arr)
//     // int arr[5] = {5,4,3,2,1};
//     // cout<<0[arr]<<endl;
//     // cout<<1[arr]<<endl;
//     // cout<<2[arr]<<endl;
//     // cout<<3[arr]<<endl;
//     // cout<<4[arr]<<endl;
//     return 0;
// };
// SUMMARY 
// arr and &arr and &arr[0] are same
// &arr works but &(arr+1) won't work
// arr[i] = *(arr + i) 
// i[arr] = *(i + arr)

// DIFFERENCES BETWEEN A POINTER AND AN ARRAY
// #include <iostream>
// using namespace std;
// FIRST DIFFERENCE: SIZE OF 
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     cout<<sizeof(arr)<<endl; // size is 20
//     cout<<sizeof(*arr)<<endl; // size is 4
//     cout<<sizeof(&arr)<<endl; // size is 4
//     int *ptr = &(arr[0]); 
//     cout<<sizeof(ptr)<<endl; // size is 4
//     cout<<sizeof(*ptr)<<endl; // size is 4
//     cout<<sizeof(&ptr)<<endl; // size is 4
//     // size of ptr is 4 , sizeof arr is 20
//     return 0;
// };
// SECOND DIFFERENCE: & OPERATOR
// int main()
// {
//     int arr[5] = {5,4,3,2,1};
//     cout<<"for arrays: "<<endl;
//     cout<<&arr<<endl;
//     cout<<arr<<endl;
//     int *ptr = &arr[0];
//     cout<<"for pointers: "<<endl;
//     cout<<ptr<<endl;
//     cout<<&ptr<<endl;
//     return 0;
//     // arr and &arr are same 
//     // ptr and &ptr are not same
// };
// THIRD DIFFERENCE
// SYMBOL TABLE CONTENT CANNOT BE CHANGED FOR ARRAYS BUT CAN BE CHANGED FOR POINTERS
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     cout<<arr<<endl;
//     // arr = arr + 1; // this will throw eror
//     int *ptr = &arr[0];
//     cout<<ptr<<endl;
//     ptr = ptr + 1;
//     cout<<ptr<<endl;
//     return 0;
//     // ptr = ptr + 1 is allowed
//     // arr = arr + 1 is not allowed
// };

// CHAR ARRAYS
// int main()
// {
//     char ch[6] = "abcde";
//     // cout<<&ch[0]<<endl;
//     // cout<<&ch[1]<<endl;
//     // cout<<&ch[2]<<endl;
//     // cout<<&ch[3]<<endl;
//     // cout<<&ch[4]<<endl;
//     // cout<<ch<<endl;
//     // cout<<ch+1<<endl;
//     // cout<<ch+2<<endl;
//     // cout<<ch+3<<endl;
//     // cout<<ch+4<<endl;
//     char *ptr = ch;
//     cout<<ptr<<endl;
//     char *ptr0 = &ch[0];
//     cout<<ptr0<<endl;
//     char *ptr1 = &ch[1];
//     cout<<ptr1<<endl;
//     char *ptr2 = &ch[2];
//     cout<<ptr2<<endl;
//     char *ptr3 = &ch[3];
//     cout<<ptr3<<endl;
//     char *ptr4 = &ch[4];
//     cout<<ptr4<<endl;
//     return 0;
// };
// in case of integer array arr pointed to the first element
// in case of char array ch points to the whole string
// in case of integer array the pointer holding &arr[0] pointed to the first array element
// in case of char array the pointer holding &arr[0] prints the whole string
// this happens because when we try to print the ptr, printing starts from the address of first character and goes untill it finds a null character
// IF WE DON'T GET A NULL CHARACTER
// #include <iostream>
// using namespace std;
// int main()
// {
//     char b = 'b';
//     char c = 'c';
//     char *ptr1 = &b;
//     cout<<ptr1<<endl;
//     char *ptr2 = &c;
//     cout<<ptr2<<endl;
//     return 0;
// };
// in this case ptr found a then some more characters and then it found null character, so it stopped
// NEVER DO char *ptr = "abcd"

// POINTERS AND FUNCTIONS
// int main()
// {
//     int value = 5;
//     int *ptr = &value;
//     // PART1 (SILLY)
//     // cout<<"value is "<<value<<endl;
//     // cout<<"ptr is "<<ptr<<endl;
//     // printFunc(ptr);
//     // printFunc(&value);
//     // cout<<"value is "<<value<<endl;
//     // cout<<"ptr is "<<ptr<<endl;
//     // PART2
//     // cout<<"value is "<<value<<endl;
//     // cout<<"ptr is "<<ptr<<endl;
//     // updator(ptr);
//     // updator(&value);
//     // cout<<"value is "<<value<<endl;
//     // cout<<"ptr is "<<ptr<<endl;
//     // PART 3
//     // cout<<"value is "<<value<<endl;
//     // cout<<"ptr is "<<ptr<<endl;
//     // *ptr = *ptr + 1;
//     // incrementorFunc(ptr);
//     // incrementorFunc(&value);
//     // cout<<"value is "<<value<<endl;
//     // cout<<"ptr is "<<ptr<<endl;
//     return 0;
// };

// POINTERS AND ARRAYS
// when we pass an array to a function, we are unknowingly passing a pointer (of the first array element to the function)
// #include <iostream>
// using namespace std;
// void check1(int *arr)
// {
//     cout<<"arr is "<<arr<<endl;
// };
// void check2(int arr[])
// {
//     cout<<"arr is "<<arr<<endl;
// };
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     cout<<arr<<endl;
//     cout<<&arr<<endl;
//     cout<<&arr[0]<<endl;
//     check1(arr);
//     check2(arr);
//     return 0;
// };
// BUT WHAT'S THE BENEFIT? IF WE PASS AN ARRAY TO A FUNCTION, AND A POINTER GET'S PASSED
// using this, we can pass a part of array to a function
// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<cmath>
// using namespace std;
// void sumFrom3(int *arr, int n)
// {
//     int sum = 0;
//     for(int i = 0; i<n; i++)
//     {
//         sum += arr[i];
//     };
//     cout<<"sum from 3rd element is "<<sum<<endl;
// };
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     sumFrom3(arr+3, 2);
//     return 0;
// };

// MACROS
// we define macros using #define
// a macro is a piece of code in a program that is replaced by value of macro
// #include <iostream>
// #define PI 3.14
// using namespace std;
// int main()
// {
//     int r = 3;
//     cout<<"areas is "<<PI*r*r<<endl;
//     return 0;
// };
// BEHIND THE SCENES
// before the compilation of the code starts, the PI will be replaced with the value 3.14
// BUT DOUBLE PI = 3.14 ALSO DOES THE SAME WORK
// - yes, but it takes space
// - yes, but it can be changed
// A MACRO DOES TAKE UP SPACED
// A MACRO'S VALUE CANNOT BE UPDATED ULESS CHANGED AT THE LINE OF DEFINITION

// GLOBAL VARIABLES
// used when we want to share a variable between functions
// BUT WE CAN USE REFERENCE VARIABLES TO SHARE VARIABLES BETWEEN FUNCTIONS
// #include <iostream>
// using namespace std;
// int i = 2;
// int main()
// {
//     cout<<i<<endl;
//     {
//         int i = 3;
//         cout<<i<<endl;
//         cout<<::i<<endl;
//     }
//     return 0;
// };
// to access the global variable in a space where another variable with the same name exists we need to use the :: scope resolution operator
// using glbal variable is a bad practice, because any function can change it
// SO WE WILL USE REFERENCE VARIABLES FOR SHARING VARIABLES

// INLINE FUNCTIONS
// are used to reduce function calls overhead
// #include <iostream>
// using namespace std;
// inline void getMax(int a, int b)
// {
//     int ans = (a>b) ? a:b;
//     cout<<ans<<endl;
// };
// int main()
// {
//     int a = 2;
//     int b = 3;
//     int ans1 = (a>b) ? a:b;
//     // cout<<ans1<<endl;
//     getMax(a,b);
//     int c = 4;
//     int d = 5;
//     int ans2 = (c>d) ? c:d;
//     getMax(c,d);
//     // cout<<ans2<<endl;
//     // but we are using (c>d) ? c:d again and again
//     // so we will make a function that does the job
//     // but we will we doing these function calls again and again 
//     // and we will be creating two new variables a and b again and again
//     // we can use reference variables to tackle the memory problem
//     // but what about function calls problem? 
//     // better use inline functions
//     return 0;
// };
// the problem with using functions repeatedly is
// - function calls again and again
// - memory is used agan and again
// - performance hit (minimal)
// SOLUTION IS INLINE FUNCTIONS
// WHAT DOES INLINE FUNCTIONS DO
// - if function body is 1 liner, compiler will make it inline
// - if functino body is more than 1 lines, then it's compiler choice whether to make the function inline or not 
// - if functino body is more than 3 lines, then compiler won't make it inline
// if the compiler made it inline then:
// - then the code of the function would be replacd with the body of the function before the compilation of the code starts (similar to the case in MACROS)

// DEFAULT ARGUMENTS
// #include <iostream>
// using namespace std;
// void printArr(int arr[], int size, int start = 0)
// {
//     for(int i = start; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     };
// };
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     printArr(arr,5);   
//     return 0;
// };

// DOUBLE POINTERS
// WHY DON'T WE HAVE SOMETHING LIKE THIS: POINTER PTR = &SOMETHING
// because
// - it doesn't give us an idea about the type of data that the address is holding
// - it doesn't spcecify the amount of spaced to be taken into consideration
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 2;
//     int *ptr1 = &a;
//     int **ptr2 = &ptr1;
//     cout<<endl<<"print the number in different ways: "<<endl;
//     cout<<a<<endl;
//     cout<<*ptr1<<endl;
//     cout<<**ptr2<<endl;
//     cout<<endl<<"print the address of number in different wasy: "<<endl;
//     cout<<&a<<endl;
//     cout<<ptr1<<endl;
//     cout<<*ptr2<<endl;
//     cout<<endl<<"print the address of the pointer ptr1 in different ways: "<<endl;
//     cout<<&ptr1<<endl;
//     cout<<ptr2<<endl;
//     cout<<endl;
//     return 0;
// };
// so a double pointer is a pointer which stores the address of another pointer

// FUNCTIONS AND DOUBLE POINTERS
// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<cmath>
// using namespace std;
// void updator1(int **p)
// {
//     p = p + 1;
// };
// void updator2(int **p)
// {
//     *p = *p + 1;
// };
// void updator3(int **p)
// {
//     **p = **p + 1;
// };
// int main()
// {
//     int a = 2;
//     int *p1 = &a;
//     int **p2 = &p1;
//     cout<<"a is "<<a<<endl;
//     cout<<"p1 is "<<p1<<endl;
//     cout<<"p2 is "<<p2<<endl;
//     // updator1(p2);
//     // updator2(p2);
//     // updator3(p2);
//     cout<<"a is "<<a<<endl;
//     cout<<"p1 is "<<p1<<endl;
//     cout<<"p2 is "<<p2<<endl;
//     return 0;
// };

// MCQS
// MCQ1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 8;
//     int second = 18;
//     cout<<first<<" "<<second<<endl;
//     int *ptr = &second;
//     *ptr = 9;
//     cout<<first<<" "<<second<<endl;
//     return 0;
// };
// MCQ2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 6;
//     cout<<first<<endl;
//     int *p = &first;
//     int *q = p;
//     (*q)++;
//     cout<<first<<endl;
//     return 0;
// };
// MCQ3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 8;
//     cout<<first<<endl;
//     int *p = &first;
//     cout<<(*p)++<<" ";
//     cout<<first<<endl;
//     return 0;
// };
// MCQ4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p = 0;
//     int first = 110;
//     *p = first; // this will give segmentation fault, so code after it won't be executed
//     cout<<*p<<endl;  
//     p = &first;
//     cout<<*p<<endl;  
//     return 0;
// };
// MCQ5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 8;
//     int second = 11;
//     int *third = &second;
//     first = *third;
//     *third = *third + 2;
//     cout<<first<<" "<<second<<endl;
//     return 0;
// };
// MCQ6
// #include <iostream>
// using namespace std;
// int main()
// {
//     float f = 12.5;
//     float p = 21.5;
//     float* ptr = &f;
//     (*ptr)++;
//     *ptr = p;
//     cout<<*ptr<<" "<<f<<" "<<p<<endl;
//     return 0;
// };
// MCQ7
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int *ptr;
//     cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;
//     return 0;
// };
// MCQ8
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {11,21,13,14};
//     cout<<*(arr)<<" "<<*(arr+1)<<endl;
//     return 0;
// };
// MCQ9
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {11,12,31};
//     cout<<arr<<" "<<&arr<<endl;
//     return 0;
// };
// arr and &arr and &arr[0] are all same
// MCQ10
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {11,21,13};
//     cout<<(arr+1)<<endl;
//     return 0;
// };
// MCQ11
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {11,21,31};
//     int *p = arr;
//     cout<<p[2]<<endl;
//     return 0;
// };
// MCQ12
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {11,12,13,14,15};
//     cout<<*(arr)<<" "<<*(arr+3);
//     return 0;
// };
// MCQ13
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {11,12,13,14};
//     int *ptr = arr++;
//     cout<<*ptr<<endl;   
//     return 0;
//     // arr = arr + 1 this isn't possible
//     // we can't update the symbol table for arrays
//     // we can update the symbol table for pointers
// };
// MCQ14
// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch = 'a';
//     char *ptr = &ch;
//     ch++;
//     cout<<*ptr<<endl;
//     return 0;
// };
// MCQ15
// #include <iostream>
// using namespace std;
// int main()
// {
//     char arr[] = "abcde";
//     char *p1 = arr;
//     char *p2 = &arr[0];
//     char *p3 = &arr[1];
//     cout<<p1<<endl;
//     cout<<p2<<endl;
//     cout<<p3<<endl;
//     return 0;
// };
// MCQ16
// #include <iostream>
// using namespace std;
// int main()
// {
//     char arr[] = "abcde";
//     char *p = &arr[0];
//     cout<<p<<endl;
//     p++;
//     cout<<p<<endl;
//     return 0;
// };
// MCQ17
// #include <iostream>
// using namespace std;
// int main()
// {
//     char str[] = "babbar";
//     char *p = str;
//     cout<<str[0]<<" "<<p[0]<<endl;
//     return 0;
// };
// MCQ18
// #include <iostream>
// using namespace std;
// void update(int *p)
// {
//     *p = *p * 2;
// };
// int main()
// {
//     int i = 10;
//     update(&i);
//     cout<<i<<endl;
//     return 0;
// };
// MCQ19
// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 110;
//     int *p = &first;
//     int **q = &p;
//     int second = (**q)++ + 9;
//     cout<<first<<" "<<second<<endl;
//     return 0;
// };
// MCQ20
// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 100;
//     int *p = &first;
//     int **q = &p;
//     int second = ++(**q);
//     int *r = *q;
//     ++(*r);
//     cout<<first<<" "<<second<<endl;
//     return 0;
// };
// MCQ21
// #include <iostream>
// using namespace std;
// void increment(int **p)
// {
//     ++(**p);
// };
// int main()
// {
//     int num = 110;
//     int *ptr = &num;
//     increment(&ptr);
//     cout<<num<<endl;    
//     return 0;
// };

// REFERENCE VARIABLES
// two variables pointing to the same address in the memory
// or two names for the same address of memory
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 2;
//     int &b = a;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     a = 1;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     return 0;
// };

// WHY DO WE NEED REFERENCE VARIABLES
// when we supply a variable to a function it's passed by value 
// reference variables are used for passing arguments by reference
// WHAT'S THE PROBLEM WITH PASS BY VALUE
// - new memroy is created because a copy of variable is created
// RETURN BY REFERENCE
// we can also make a function return a reference variable, but the problem with this is that the reference variable will be local to the function and if we try to return it from the function that it won't work
// SIMILAR IS THE PROBLME WITH A FUNCTION THAT RETURNS A POINTER

//  CHARACTER ARRAYS AND STRINGS
// int main()
// {
//     char arr[5];
//     cin>>arr;
//     cout<<arr<<endl;
//     // OBSERVATION 1
//     // IF I SUPPLY A STRING LONGER THAN 5 THEN ALSO THE ARR TAKES IT AND THE WHOLE INPUT GETS PRINTED INTO THE TERMINAL
//     // POINT 1
//     // IF WE SUPPLY LESS THAN 5 CHARACTERS THEN THE INDEX AFTER THE INDEX CONTAINING THE LAST CHARACTER WILL BE ASSIGNED NULL CHARACTER. NOW WHILE PRINTING THE CHARACTER ARRAY, THE COMPILER USES THIS NULL CHARACTER TO KNOW WHERE TO STOP THE PRINTING OF CHARACTERS
//     // POINT 2
//     // CIN STOPS INSERTION WHEN IT FINDS A SPACE OR A NEW LINE CHARACTER
//     // POINT 3
//     // TAKING THE INPUT FROM THE USER BUT SETTING CHARACTER AT SOME INDEX = NULL CHARACTER, THEN LOGGING THE CHARACTER ARRAY WILL PRINT ONLY THE ARRAY PART THAT IS BEFORE THE NULL CHARACTER
//     arr[2] = '\0';
//     cout<<arr<<endl;
// };

//  FUNCTION TO CALCULATE THE LENGTH OF A STRING
// int lengthOfString(string str)
// {
//     int length = 0;
//     for(int i = 0; str[i]!='\0'; i++)
//     {
//         length++;
//     };
//     return length;
// };

//  FUNCTION TO REVERSE A STRING
// void reverseString(string &str)
// {
//     int start = 0;
//     int end = str.length()-1;
//     while(start<end)
//     {
//         swap(str[start],str[end]);
//         start++;
//         end--;
//     };
// };

// ARRAYS SIZE IN RUNTIME IS A BAD PRACTICE
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     return 0;
// };
// this is a bad practice
// why?
// because we will get to know the size of the array in runtime
// but we should be knowing the size of the array in compiletime
// BUT WHAT'S THE PROBLEM IF SIZE OF ARRAY IS REVEALED IN THE RUNTIME
// - when the program starts
// - memory is allocated to it
// - a stack memory and a heap memory
// - stack is smaller than the heap
// - if the size of the array is known in compile time then according to the needs a stack is brought
// - if the size of the array is not known in the runtime then, first program will bring a stack of particular size with it, then it will find the size of the array, if the size of array is so large that the stack cannot accomodate that, then our program will crash
// - so size of stack is selected accroding the information that we have in the compile time
// - runtime se pehle to stack ban chuka tha, ab stack chota pad gaya to kya karoge
// untill now what ever we were making int arr, int , char c, all used the stack memory

// DYNAMIC MEMORY ALLOCATION
// we can utilize heap also 
// to make an array whose size will be decided in the runtime, we will use the heap memory
// if we want to use the heap memory then we need to use the new keyword
// if we are using the stack memory then it's called static allocation
// if we are using the heap memory then it's called dynamic memory allocation
// example: new char;
// new char will return address
// but we cannot give a name to this new char
// we will use pointers to store the address that the dynamic memory allocation code will return
// char *p = new char; 
// we use this syntax to:
// - do dynamic memory allocation
// - to allocate memory in the heap
// - to access that address in heap using the pointer variable
// - the pointer varialbe will be made in the stack
// - but it will hold the address of the memory in the heap
// EXAMPLE 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p = new int;
//     cout<<sizeof(p)<<endl;
//     return 0;
// };
// EXAMPLE 2 (CREATING AN ARRAY IN HEAP MEMORY)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int *arr = new int[5];
//     return 0;
// };
// EXAMPLE 3 (CREATING AN ARRAY OF SIZE SUPPLIED BY THE USE)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Specify the size: ";
//     cin>>size;
//     int *arr = new int[size];
//     cout<<"Supply the elementsk: ";
//     for(int i = 0; i<size; i++)
//     {
//         cin>>arr[i];
//     };
//     cout<<endl;
//     cout<<"pringing"<<endl;
//     for(int i = 0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     };
//     return 0;
// };

// STATIC v/s DYNAMIC MEMORY ALLOCATION
// static: int arr[5] will take 20 bytes if an int takes 4 bytes 
// synamic: int *arr = new int[5] will take 28 bytes if an int takes 4 bytes and an int * pointer variable takes 8 bytes (24 bytes if an int takes 4 bytes and an int * pointer variable takes 4 bytes)

// BAD PRACTICE
// while(true)
// {
//     int *p = new int;
// }
// if it was int p = 1; then everytime a new variable would be created and deleted
// but in this case 
// a new variable will be made in the stack storing the address of the dynamically allocated integer,
// when } is reached the memory in the stack is freed but the memory in the heap isn't cleared
// this will crash our program the moment the heap memory goes full
// in case of static memory space is cleaned automatically
// in case of dynamic memory space isn't cleaned automatically, it needs to be handled manually

// HOW TO DELETE MEMORY FROM HEAP
// using the delete keyword
// for int *i = new int;
// delete i;
// for int *arr = new int[5];
// delete []arr;

// 2D ARRAYS
//  // in the memory the 2D array is being stored as a linear array only

// // TAKING INPUT FOR 2D ARRAY ELEMENT AND PRINTING THE ELEMENTS
// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     int n;
//     cout<<"Enter the value of m and n: ";
//     cin>>m>>n;
//     cout<<"m is "<<m<<endl;
//     cout<<"n is "<<n<<endl;
//     char arr[m][n];
//     cout<<"Now Enter the Elements: "<<endl;
//     // ROW WISE INPUT
//     // for(int i = 0; i<m; i++)
//     // {
//     //     for(int j = 0; j<n; j++)
//     //     {
//     //         cin>>arr[i][j]; 
//     //     };
//     // };
//     // COLUMN WISE INPUT
//     for(int j = 0; j<n; j++)
//     {
//         for(int i = 0; i<m; i++)
//         {
//             cin>>arr[i][j]; 
//         };
//     };
//     cout<<"printing the element: "<<endl;
//     for(int i = 0; i<m; i++)
//     {
//         for(int j = 0; j<n; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// // INTIALIZING A 2D ARRAY
// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     // first way
// //     // char arr [3][3] = {'a','b','c','d','e','f','g','h','i'};
// //     // second way
// //     char arr [3][4] = {{'a','d','g','j'},{'b','e','h','k'},{'c','f','i','l'}};
// //     for(int i = 0; i<3; i++)
// //     {
// //         for(int j = 0; j<4; j++)
// //         {
// //             cout<<arr[i][j]<<" ";
// //         };
// //         cout<<endl;
// //     };
// //     return 0;
// // };

// // LINEAR SEARCH IN 2DARRAYS
// // time O(m*n)
// // space O(1)
// // #include <iostream>
// // using namespace std;
// // void print2DArray(char arr[][4], int rows, int cols)
// // {
// //     cout<<"printing the 2D array"<<endl;
// //     for(int i = 0; i<rows; i++)
// //     {
// //         for(int j = 0; j<cols; j++)
// //         {
// //             cout<<arr[i][j]<<" ";
// //         };
// //         cout<<endl;
// //     };
// // };
// // bool linearSearch(char arr[][4], int rows, int cols, int element)
// // {
// //     for(int i = 0; i<rows; i++)
// //     {
// //         for(int j = 0; j<cols; j++)
// //         {
// //             if(arr[i][j]==element)
// //             {
// //                 return 1;
// //             };
// //         };
// //     };
// //     return 0;
// // };
// // int main()
// // {
// //     char arr[3][4];
// //     cout<<endl;
// //     cout<<"Enter the elements: ";
// //     for(int i = 0; i<3; i++)
// //     {
// //         for(int j = 0; j<4; j++)
// //         {
// //             cin>>arr[i][j];
// //         };
// //     };
// //     cout<<endl;
// //     print2DArray(arr,3,4);
// //     cout<<endl;
// //     char element;
// //     cout<<"Enter the element you want to search ";
// //     cin>>element;
// //     cout<<endl;
// //     bool present = linearSearch(arr,3,4,element);
// //     if(present)
// //     {
// //         cout<<element<<" is present"<<endl;
// //     }
// //     else
// //     {
// //         cout<<element<<" is not present"<<endl;
// //     };
// //     cout<<endl;
// //     return 0;
// // };

// // ROW-WISE SUM AND COLUMN-WISE SUM
// // #include <iostream>
// // #include <vector>
// // using namespace std;
// // void print2DArray(int arr[][4], int rows, int cols)
// // {
// //     cout<<"printing the 2D array"<<endl;
// //     for(int i = 0; i<rows; i++)
// //     {
// //         for(int j = 0; j<cols; j++)
// //         {
// //             cout<<arr[i][j]<<" ";
// //         };
// //         cout<<endl;
// //     };
// // };
// // vector<int> rowWiseSum(int arr[][4], int rows, int cols){
// //     vector<int> resultantVector;
// //     for(int i = 0; i<rows; i++)
// //     {
// //         int sum = 0;
// //         for(int j = 0; j<cols; j++)
// //         {
// //             sum+=arr[i][j];
// //         };
// //         resultantVector.push_back(sum);
// //     };
// //     return resultantVector;
// // };
// // vector<int> colWiseSum(int arr[][4], int rows, int cols){
// //     vector<int> resultantVector;
// //     for(int j = 0; j<cols; j++)
// //     {
// //         int sum = 0;
// //         for(int i = 0; i<rows; i++)
// //         {
// //             sum+=arr[i][j];
// //         };
// //         resultantVector.push_back(sum);
// //     };
// //     return resultantVector;
// // };
// // int main()
// // {
// //     int arr[3][4];
// //     cout<<endl;
// //     cout<<"Enter the elements: ";
// //     for(int i = 0; i<3; i++)
// //     {
// //         for(int j = 0; j<4; j++)
// //         {
// //             cin>>arr[i][j];
// //         };
// //     };
// //     cout<<endl;
// //     print2DArray(arr,3,4);
// //     cout<<endl;
// //     vector<int> rowSum = rowWiseSum(arr,3,4);
// //     cout<<"row wise sum is: ";
// //     for(int i = 0; i<rowSum.size(); i++)
// //     {
// //         cout<<rowSum[i]<<" ";
// //     };
// //     cout<<endl;
// //     vector<int> colSum = colWiseSum(arr,3,4);
// //     cout<<"col wise sum is: ";
// //     for(int i = 0; i<colSum.size(); i++)
// //     {
// //         cout<<colSum[i]<<" ";
// //     };
// //     cout<<endl;
// //     cout<<endl;
// //     return 0;
// // };

// // LARGEST ROW SUM AND LARGEST COLUMN SUM
// #include <iostream>
// #include <vector>
// using namespace std;
// void print2DArray(int arr[][4], int rows, int cols)
// {
//     cout<<"printing the 2D array"<<endl;
//     for(int i = 0; i<rows; i++)
//     {
//         for(int j = 0; j<cols; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         };
//         cout<<endl;
//     };
// };
// pair<int,int> largestRowSum(int arr[][4], int rows, int cols){
//     pair<int,int> resultantPair;
//     int minSum = INT32_MIN;
//     int minRow = -1;
//     for(int i = 0; i<rows; i++)
//     {
//         int sum = 0;
//         for(int j = 0; j<cols; j++)
//         {
//             cout<<arr[i][j]<<" ";
//             sum+=arr[i][j];
//         };
//         cout<<endl;
//         if(sum>minSum)
//         {
//             minRow = i;
//             minSum = sum;
//         };
//     };
//     resultantPair.first = minRow;
//     resultantPair.second = minSum;
//     return resultantPair;
// };
// pair<int,int> largestColSum(int arr[][4], int rows, int cols){
//     pair<int,int> resultantPair;
//     int minSum = INT32_MIN;
//     int minCol = -1;
//     for(int j = 0; j<cols; j++)
//     {
//         int sum = 0;
//         for(int i = 0; i<rows; i++)
//         {
//             cout<<arr[i][j]<<" ";
//             sum+=arr[i][j];
//         };
//         cout<<endl;
//         if(sum>minSum)
//         {
//             minCol = i;
//             minSum = sum;
//         };
//     };
//     resultantPair.first = minCol;
//     resultantPair.second = minSum;
//     return resultantPair;
// };
// int main()
// {
//     int arr[3][4];
//     cout<<endl;
//     cout<<"Enter the elements: ";
//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<4; j++)
//         {
//             cin>>arr[i][j];
//         };
//     };
//     cout<<endl;
//     pair<int,int> largestRowSumPair = largestRowSum(arr,3,4);
//     cout<<endl;
//     cout<<largestRowSumPair.first<<" row has largest sum which is equal to "<<largestRowSumPair.second<<endl;
//     cout<<endl;
//     pair<int,int> largestColSumPair = largestColSum(arr,3,4);
//     cout<<endl;
//     cout<<largestColSumPair.first<<" col has largest sum which is equal to "<<largestColSumPair.second<<endl;
//     cout<<endl;
//     return 0;
// };

// RESEARCH TO BE DONE
// about the auto keyword

// HOMEWORK
// TASK (INITIALIZE AN ARRAY OF SIZE N WITH EVERY ELEMENT AS x)
// STABLE AND UNSTABLE ALGORITHMS (FOR BUBBLE AND SELECTION)
// WHAT IS IN-PLACE SORTING
// MACROS AND IT'S TYPES 
// POINTER QUIZ ON QUIDED PATHS OF CODING NINJAS
// CONSTANT VARIABLES
// VOID POINTER
// ADDRESS TYPECASTING
// DIFFERENCES BETWEEN CHARACTER ARRAY AND STRINGS

// REFERENCES
// https://www.cplusplus.com

// PROBLEMS TO BE SORTED OUT
// slow compilation of c++ code

