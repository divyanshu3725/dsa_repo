// 1) subtract-the-product-and-sum-of-digits-of-an-integer (done) (leetcode)
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

// 2) number-of-1-bits (done) (leetcode)
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

// 3) reverse-integer (done) (leetcode)
// https://leetcode.com/problems/reverse-integer/description/
// #include <iostream>
// using namespace std;
// int reverse(int x) {
//     int result = 0;
//     while(x!=0)
//     {
//         int lastDigit = x%10;
//         if(result>INT32_MAX/10 || result<INT32_MIN/10)
//         {
//             return 0;
//         };
//         result=10*result+lastDigit;
//         x/=10;
//     };
//     return result;
// };
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<reverse(n)<<endl;
//     return 0;
// };

// 4) complement-of-base-10-integer (done) (leetcode)
// https://leetcode.com/problems/complement-of-base-10-integer/
// #include <iostream>
// using namespace std;
// int bitwiseComplement(int n) {
//     if(n==0)
//     {
//         return 1;
//     }
//     int m = n;
//     int mask = 0;
//     while(m!=0)
//     {
//         mask = (mask<<1) | 1;
//         m>>=1;
//     };
//     return mask&(~n);
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<bitwiseComplement(n)<<endl;
//     return 0;
// };

// 5) find-unique (done) (codestudio)
// https://www.codingninjas.com/studio/problems/find-unique_625159
// one way (better solution) (using xor)
// #include <iostream>
// using namespace std;
// int findUnique(int *arr, int size)
// {
//     int result = 0;
//     for(int i = 0; i<size; i++)
//     {
//         result^=arr[i];
//     };
//     return result;
// };
// int main()
// {
//     int arr[5] = {1,2,1,3,2};
//     cout<<findUnique(arr,5)<<endl;
//     return 0;
// };
// second way (using vector)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int findUnique(int *arr, int size)
// {
//     int result = 0;
//     vector<int> vect;
//     for (int i = 0; i < size; i++)
//     {
//         int elem = arr[i];
//         bool found = false;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[j] == elem)
//             {
//                 found = true;
//             };
//         };
//         if (found)
//         {
//             vect.push_back(-(elem));
//         }
//         else
//         {
//             vect.push_back(elem);
//         }
//     };
//     for (int i = 0; i < vect.size(); i++)
//     {
//         result += vect[i];
//     };
//     return result;
// }
// int main()
// {
//     int arr[] = {1, 2, 1, 2, 11, 4 ,4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << findUnique(arr, size) << endl;
//     return 0;
// };
// third ways (without using vector) (without using xor)
// #include <iostream>
// using namespace std;
// int findUnique(int *arr, int size)
// {
//     int result = 0;
//     for (int i = 0; i < size; i++)
//     {
//         int elem = arr[i];
//         bool found = false;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[j] == elem)
//             {
//                 found = true;
//             };
//         };
//         if (found)
//         {
//             arr[i] = -arr[i];
//         };
//     };
//     for (int i = 0; i < size; i++)
//     {
//         result += arr[i];
//     };
//     return result;
// }
// int main()
// {
//     int arr[] = {1, 2, 1, 2, 11, 4 ,4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     cout << findUnique(arr, size) << endl;
//     return 0;
// };

// SWAP ALTERNATE
// #include <iostream>
// using namespace std;
// void swapAlternate(int arr[], int size)
// {
//     int first = 0;
//     int second = 1;
//     while(second<size)
//     {
//         swap(arr[first],arr[second]);
//         first+=2;
//         second+=2;
//     };
// };
// int main()
// {
//     int arr[] = {1,2,3,4,5,6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     };
//     cout<<endl;
//     swapAlternate(arr,size);
//     for(int i = 0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     };
//     cout<<endl;
//     return 0;
// };

// 6) unique-number-of-occurrences (doubt) (leetcode) (working on local but not on leetcode)
// https://leetcode.com/problems/unique-number-of-occurrences/
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// bool uniqueOccurrences(vector<int>& arr) {
//     sort(arr.begin(), arr.end());
//     vector<int> vect;
//     int count = 1;
//     int index = 0;
//     while(index<arr.size())
//     {
//         // cout<<"running for index "<<index<<endl;
//         if(arr[index+1]==arr[index])
//         {
//             count++;
//         }
//         else
//         {
//             // cout<<arr[index]<<" occurred "<<count<<" times"<<endl;
//             for(int j = 0; j<vect.size(); j++)
//             {
//                 if(count==vect[j])
//                 {
//                     return false;
//                 }
//             };
//             vect.push_back(count);
//             count = 1;
//         };
//         index++;
//     };
//     return true;
// };
// int main()
// {
//     vector<int> vect;
//     int arr[] = {3,3,3,2,2,1,4,4,4,4,5,5,5,5,5};
//     for(int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++)
//     {
//         vect.push_back(arr[i]);
//     };
//     cout<<uniqueOccurrences(vect)<<endl;
//     return 0;
// };

// 7) duplicate-in-array (done) (codestudio)
// https://www.codingninjas.com/studio/problems/duplicate-in-array_893397
// one way (using xor)
// #include <iostream>
// #include <vector>
// using namespace std;
// int findDuplicate(vector<int> &arr) 
// {
// 	int a = 0;
// 	int b = 0;
//     for(int i = 1; i<arr.size(); i++)
//     {
//         a^=i;
//     };
//     for(int i = 0; i<arr.size(); i++)
//     {
//         b^=arr[i];
//     };
//     return b^a;
// }
// int main()
// {
//     int arr[] = {6,3,1,5,4,3,2};
//     vector<int> vect;
//     for(int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++)
//     {
//         vect.push_back(arr[i]);
//     };
//     cout<<findDuplicate(vect)<<endl;
//     return 0;
// };
// second way (without using xor)
// #include <iostream>
// #include <vector>
// using namespace std;
// int findDuplicate(vector<int> &arr) 
// {
// 	int a = 0;
// 	int b = 0;
//     for(int i = 1; i<arr.size(); i++)
//     {
//         a+=i;
//     };
//     for(int i = 0; i<arr.size(); i++)
//     {
//         b+=arr[i];
//     };
//     return b-a;
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,5};
//     vector<int> vect;
//     for(int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++)
//     {
//         vect.push_back(arr[i]);
//     };
//     cout<<findDuplicate(vect)<<endl;
//     return 0;
// };

// 8) find-all-duplicates-in-an-array (dobut) (leetcode) (working on local but not on leetcode)
// https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<int> findDuplicates(vector<int>& nums) {
//     sort(nums.begin(), nums.end());      
//     int index = 0;
//     int count = 1;
//     vector<int> vect;
//     while(index<nums.size())
//     {
//         if(nums[index]==nums[index+1])
//         {
//             vect.push_back(nums[index]);
//         };
//         index++;
//     };
//     return vect;
// };
// int main()
// {
//     // int arr[] = {4,3,2,7,8,2,3,1};
//     // int arr[] = {1,1,2};
//     int arr[] = {1};
//     vector<int> vect;
//     for(int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++)
//     {
//         vect.push_back(arr[i]);
//     };
//     vector<int> resVect = findDuplicates(vect);
//     for(int i = 0; i<resVect.size(); i++)
//     {
//         cout<<resVect[i]<<" ";
//     };
//     cout<<endl;
//     return 0;
// };

// 9) intersection-of-2-arrays (done) (codestudio)
// https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149
// #include <iostream>
// #include <algorithm>
// #include <cmath>
// #include <vector>
// using namespace std;
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	vector<int> resVector;
//     int i = 0;
//     int j = 0;
//     while(i<n && j<m)
//     {
//         // cout<<"for i = "<<i<<" j = "<<j<<endl;
//         if(arr2[j]<arr1[i])
//         {
//             j++;
//         }
//         else if (arr2[j]==arr1[i])
//         {
//             resVector.push_back(arr2[j]);
//             j++;
//             i++;
//         }
//         else
//         {
//             i++;
//         };
//     };
//     sort(resVector.begin(), resVector.end());
//     return resVector;
// }

// 10) pair-sum (done) (codestudio)
// https://www.codingninjas.com/studio/problems/pair-sum_697295
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// vector< vector<int> > pairSum(vector<int> &arr, int s){
//     // cout<<"algo func called"<<endl;
//     sort(arr.begin(), arr.end());
//     vector< vector<int> > resVector;
//     for(int i = 0; i<arr.size(); i++)
//     {
//         for(int j = i+1; j<arr.size(); j++)
//         {
//             // cout<<"checking for "<<arr[i]<<" and "<<arr[j]<<endl;
//             if(arr[j]+arr[i]==s)
//             {
//                 // cout<<"yes they are pair sum "<<endl;
//                 vector<int> sampVect;
//                 sampVect.push_back(min(arr[j],arr[i]));
//                 sampVect.push_back(max(arr[j],arr[i]));
//                 resVector.push_back(sampVect);
//             };
//             if(arr[j]+arr[i]>s)
//             {
//                 break;
//             };
//         };
//     };
//     sort(resVector.begin(), resVector.end());
//     return resVector;
// }
// int main()
// {
//     vector<int> vect;
//     vect.push_back(1);
//     vect.push_back(2);
//     vect.push_back(3);
//     vect.push_back(4);
//     vect.push_back(5);
//     int sum = 5;
//     // cout<<"calling the algo func"<<endl;
//     vector< vector<int> > resVector = pairSum(vect,sum);
//     for(int i = 0; i<resVector.size(); i++)
//     {
//         cout<<resVector[i][0]<<" "<<resVector[i][1]<<endl;
//     };
//     return 0;
// };

