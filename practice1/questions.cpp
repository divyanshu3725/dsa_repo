// 1)  subtract-the-product-and-sum-of-digits-of-an-integer (done) (leetcode)
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
// tc is O(log10(n))
// sc is 1
// int subtractProductAndSum(int n)
// {
//     int sum = 0;
//     int prod = 1;
//     while (n)
//     {
//         int lastDigit = n % 10;
//         sum += lastDigit;
//         prod *= lastDigit;
//         n /= 10;
//     };
//     return prod - sum;
// };

// 2)  number-of-1-bits (done) (leetcode)
// tc is O(1)
// sc is O(1)
// https://leetcode.com/problems/number-of-1-bits/
// int hammingWeight(int n)
// {
//     int count = 0;
//     while (n > 0)
//     {
//         count += n & 1;
//         n >>= 1;
//     };
//     return count;
// };

// 3)  reverse-integer (done) (leetcode)
// https://leetcode.com/problems/reverse-integer/description/
// tc is O(log10(n))
// sc is O(1)
// int reverse(int x)
// {
//     int result = 0;
//     while (x != 0)
//     {
//         int lastDigit = x % 10;
//         if (result > INT32_MAX / 10 || result < INT32_MIN / 10)
//         {
//             return 0;
//         };
//         result = 10 * result + lastDigit;
//         x /= 10;
//     };
//     return result;
// };

// 4)  complement-of-base-10-integer (done) (leetcode)
// https://leetcode.com/problems/complement-of-base-10-integer/
// time complexity is O(1)
// space complexity is O(1)
// int bitwiseComplement(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     int m = n;
//     int mask = 0;
//     while (m != 0)
//     {
//         mask = (mask << 1) | 1;
//         m >>= 1;
//     };
//     return (~n) & mask;
// }

// 5)  find-unique (done) (codestudio)
// time complexity O(n)
// spance complexity O(1)
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

// x)  SWAP ALTERNATE
// time is O(n)
// space is O(1)
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
//             auto it = find(vect.begin(), vect.end(), count);
//             if(it==vect.end())
//             {
//                 vect.push_back(count);
//             }
//             else
//             {
//                 return 0;
//             }
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
// time is O(n)
// space is O(1)
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

// x) triplets-with-given-sum (TLE) (codestudio)
// https://www.codingninjas.com/studio/problems/triplets-with-given-sum_893028
// #include <iostream>
// #include <algorithm>
// #include <cmath>
// #include <vector>
// using namespace std;
// vector< vector<int> > findTriplets(vector<int>arr, int n, int K) {
//     // cout<<"algo called"<<endl;
//     vector < vector<int> > resultantVector;
//     sort(arr.begin(), arr.end());
//     for(int i = 0; i<n; i++)
//     {
//         if(arr[i]<=K)
//         {
//             for(int j = i+1; j<n; j++)
//             {
//                 if(arr[i]+arr[j]<=K)
//                 {
//                     for(int k = j+1; k<n; k++)
//                     {
//                         if(arr[i]+arr[j]+arr[k]<K)
//                         {
//                         }
//                         else if (arr[i]+arr[j]+arr[k]==K)
//                         {
//                             vector <int> sampleVector;
//                             sampleVector.push_back(arr[i]);
//                             sampleVector.push_back(arr[j]);
//                             sampleVector.push_back(arr[k]);
// 							bool present = false;
//                             for(int k = 0; k<resultantVector.size(); k++)
//                             {
//                                 if(resultantVector[k]==sampleVector)
//                                 {
//                                     present = true;
//                                     break;
//                                 };
//                             };
//                             if(!present)
//                             {
//                             resultantVector.push_back(sampleVector);
//                             }
//                             break;
//                         }
//                         else
//                         {
//                             break;
//                         };
//                     };
//                 };
//             };
//         };
//     };
//     return resultantVector;
// };

// 8) find-all-duplicates-in-an-array (dobut) (leetcode) (working on local but not on leetcode)
// https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<int> findDuplicates(vector<int>& nums) {
//     cout<<"algo called"<<endl;
//     sort(nums.begin(), nums.end());
//     int index = 0;
//     int count = 1;
//     vector<int> vect;
//     int iter = 1;
//     while(index<nums.size())
//     {
//         cout<<"checking for "<<nums[index]<<endl;
//         cout<<iter<<endl;
//         iter++;
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
//     int arr[] = {4,3,2,7,8,2,3,1};
//     vector<int> vect;
//     for(int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++)
//     {
//         vect.push_back(arr[i]);
//     };
//     cout<<"algo calling"<<endl;
//     vector<int> resVect = findDuplicates(vect);
//     for(int i = 0; i<resVect.size(); i++)
//     {
//         cout<<resVect[i]<<" ";
//     };
//     cout<<endl;
//     return 0;
// };

// 9)  intersection-of-2-arrays (done)  (codestudio)
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

// 10)  pair-sum (done) (codestudio)
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
//     cout<<"calling the algo func"<<endl;
//     vector< vector<int> > resVector = pairSum(vect,sum);
//     for(int i = 0; i<resVector.size(); i++)
//     {
//         cout<<resVector[i][0]<<" "<<resVector[i][1]<<endl;
//     };
//     return 0;
// };

// 11) triplet-sum (TLE) (codestudo)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// vector< vector<int> > findTriplets(vector<int>arr, int n, int K) {
//     cout<<"algo called"<<endl;
//     vector < vector<int> > resultantVector;
//     sort(arr.begin(), arr.end());
//     for(int i = 0; i<n; i++)
//     {
//         if(arr[i]<=K)
//         {
//             for(int j = i+1; j<n; j++)
//             {
//                 if(arr[i]+arr[j]<=K)
//                 {
//                     for(int k = j+1; k<n; k++)
//                     {
//                         if(arr[i]+arr[j]+arr[k]<K)
//                         {
//                         }
//                         else if (arr[i]+arr[j]+arr[k]==K)
//                         {
//                             vector <int> sampleVector;
//                             sampleVector.push_back(arr[i]);
//                             sampleVector.push_back(arr[j]);
//                             sampleVector.push_back(arr[k]);
//                             bool present = false;
//                             for(int k = 0; k<resultantVector.size(); k++)
//                             {
//                                 if(resultantVector[k]==sampleVector)
//                                 {
//                                     present = true;
//                                     break;
//                                 };
//                             };
//                             if(!present)
//                             {
//                             resultantVector.push_back(sampleVector);
//                             }
//                             break;
//                         }
//                         else
//                         {
//                             break;
//                         };
//                     };
//                 };
//             };
//         };
//     };
//     return resultantVector;
// };
// int main()
// {
//     int sum = 0;
//     vector<int> vect;
//     vect.push_back(0);
//     vect.push_back(0);
//     vect.push_back(0);
//     vect.push_back(0);
//     vect.push_back(0);
//     vect.push_back(0);
//     vect.push_back(0);
//     vect.push_back(0);
//     cout<<"calling algo"<<endl;
//     vector< vector<int> > resultantVector = findTriplets(vect, vect.size(), sum);
//     for(int i = 0; i<resultantVector.size(); i++)
//     {
//         for(int j = 0; j<resultantVector[i].size(); j++)
//         {
//             cout<<resultantVector[i][j]<<" ";
//         };
//         cout<<endl;
//     };
// };

// 12) sort-0-1-2 (done)  (codestudio)
// https://www.codingninjas.com/studio/problems/sort-0-1-2_631055
// #include <bits/stdc++.h>
// using namespace std;
// void sort012(int *arr, int n)
// {
//     int zeroFrek = 0;
//     int oneFrek = 0;
//     int twoFrek = 0;
//     for(int i = 0; i<n; i++)
//     {
//         if(arr[i]==0)
//         {
//             zeroFrek++;
//         }
//         else if (arr[i]==1)
//         {
//             oneFrek++;
//         }
//         else
//         {
//             twoFrek;
//         };
//     };
//     for(int j = 0; j<n; j++)
//     {
//         if(j<zeroFrek)
//         {
//             arr[j] = 0;
//         }
//         else if ((j-zeroFrek)<oneFrek)
//         {
//             arr[j] = 1;
//         }
//         else
//         {
//             arr[j] = 2;
//         };
//     };
// }
// int main()
// {
//     int arr[] = {2,2,2,1,1,1,0};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     };
//     cout<<endl;
//     sort012(arr,size);
//     for(int i = 0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     };
// }

// x)  sort-0-1 (codestudio)
// https://www.codingninjas.com/studio/problems/sort-0-1_624379?leftPanelTabValue=PROBLEM
// #include<iostream>
// #include<vector>
// #include<cmath>
// #include<algorithm>
// using namespace std;
// void sort01(vector<int> &vect)
// {
//     cout<<"algo start"<<endl;
//     int siz = vect.size();
//     int start = 0;
//     int end = siz-1;
//     int count = 1;
//     while(start<end)
//     {
//         cout<<"start = "<<start<<endl;
//         cout<<"end = "<<end<<endl;
//         cout<<count<<endl;
//         count++;
//         if(vect[start]==1)
//         {
//             if(vect[end]==0)
//             {
//                 swap(vect[start],vect[end]);
//                 start++;
//                 end--;
//             }
//             else
//             {
//                 end--;
//             };
//         }
//         else
//         {
//             if(vect[end]==0)
//             {
//                 start++;
//             }
//             else
//             {
//                 start++;
//                 end--;
//             };
//         };
//     };
// };
// int main()
// {
//     vector<int> vect = {0,1,1,0,0,1,0,1};
//     for(int i = 0; i<vect.size(); i++)
//     {
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
//     cout<<"algo called"<<endl;
//     sort01(vect);
//     for(int i = 0; i<vect.size(); i++)
//     {
//         cout<<vect[i]<<" ";
//     };
// };

// 13) 🟩  first-and-last-position-of-an-element-in-sorted-array (done) (codestudio)
// https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
// int leftMostOccurence(vector<int> &arr, int n, int k)
// {
//     int result = -1;
//     int start = 0;
//     int end = arr.size() - 1;
//     while (start <= end)
//     {
//         int midInd = start + (end - start) / 2;
//         int midElem = arr[midInd];
//         if (k > midElem)
//         {
//             start = midInd + 1;
//         }
//         else
//         {
//             if (k == midElem)
//             {
//                 result = midInd;
//             }
//             end = midInd - 1;
//         };
//     };
//     return result;
// };
// int rightMostOccurence(vector<int> &arr, int n, int k)
// {
//     int result = -1;
//     int start = 0;
//     int end = arr.size() - 1;
//     while (start <= end)
//     {
//         int midInd = start + (end - start) / 2;
//         int midElem = arr[midInd];
//         if (k < midElem)
//         {
//             end = midInd - 1;
//         }
//         else
//         {
//             if (k == midElem)
//             {
//                 result = midInd;
//             }
//             start = midInd + 1;
//         };
//     };
//     // cout<<"rightmost done"<<endl;
//     return result;
// };
// pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
// {
//     pair<int, int> resultantPair;
//     resultantPair.first = leftMostOccurence(arr, n, k);
//     resultantPair.second = rightMostOccurence(arr, n, k);
//     return resultantPair;
// };

// 14) 🟩 TOTAL NUMBER OF OCCURENCES IN A SORTED ARRAY
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// int leftMostOccurence(vector<int> &arr, int n, int k){
//     int result = -1;
//     int start = 0;
//     int end = arr.size()-1;
//     while (start<=end)
//     {
//         int midInd = start + (end-start)/2;
//         int midElem = arr[midInd];
//         if(k<midElem)
//         {
//             end = midInd-1;
//         }
//         else if (k==midElem)
//         {
//             result = midInd;
//             end = midInd-1;
//         }
//         else
//         {
//             start = midInd+1;
//         };
//     };
//     return result;
// };
// int rightMostOccurence(vector<int> &arr, int n, int k){
//     int result = -1;
//     int start = 0;
//     int end = arr.size()-1;
//     while (start<=end)
//     {
//         int midInd = start + (end-start)/2;
//         int midElem = arr[midInd];
//         if(k<midElem)
//         {
//             end = midInd-1;
//         }
//         else if (k==midElem)
//         {
//             result = midInd;
//             start = midInd+1;
//         }
//         else
//         {
//             start = midInd+1;
//         };
//     };
//     return result;
// };
// int totalNumberOfOccurences(vector<int>& arr, int n, int k)
// {
//     int first = leftMostOccurence(arr,n,k);
//     int second = rightMostOccurence(arr,n,k);
//     if(first==-1 && second==-1)
//     {
//         return 0;
//     }
//     else
//     {
//         return second-first+1;
//     };
// };
// int main()
// {
//     vector<int> vect = {0,0,1,1,2,2,2,2};
//     cout<<totalNumberOfOccurences(vect,vect.size(),2)<<endl;
//     return 0;
// };

// 15) 🟩 peak-index-in-a-mountain-array (done) (leetcode)
// https://leetcode.com/problems/peak-index-in-a-mountain-array/
// int peakIndexInMountainArray(vector<int> &arr)
// {
//     int start = 0;
//     int end = arr.size() - 1;
//     while (start != end)
//     {
//         int midInd = start + (end - start) / 2;
//         int midElem = arr[midInd];
//         int nextElem = arr[midInd + 1];
//         if (midElem < nextElem)
//         {
//             start = midInd + 1;
//         }
//         else
//         {
//             end = midInd;
//         };
//     };
//     return start;
// };

// x)  🟩 PIVOTE IN A ROTATED SORTED ARRAY
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// int pivot(vector<int> vect)
// {
//     cout<<"algo called"<<endl;
//     int start = 0;
//     int end = vect.size() - 1;
//     int firstElem = vect[start];
//     int lastElem = vect[end];
//     int count = 1;
//     while (start != end)
//     {
//         cout<<"count = "<<count<<endl;
//         count++;
//         int midInd = start + (end - start) / 2;
//         int midElem = vect[midInd];
//         if (firstElem <= midElem)
//         {
//             start = midInd + 1;
//         }
//         else
//         {
//             end = midInd;
//         };
//     };
//     return start;
// };
// int main()
// {
//     vector<int> vect = {2, 3, 7, 9, 1};
//     cout<<"algo calling"<<endl;
//     cout << pivot(vect) << endl;
// };

// 16) 🟩 search-in-rotated-sorted-array (PARTIALLY ACCEPTED) (all solutions are partially accepted) (codestudio)
// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?leftPanelTabValue=PROBLEM
// int pivot(vector<int> arr, int n)
// {
//     int s = 0;
//     int e = n - 1;
//     int mid = (s + e) / 2;
//     while (s < e)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//         mid = (s + e) / 2;
//     }
//     return s;
// }
// int binSearch(vector<int> arr, int n, int s, int e, int k)
// {
//     int mid = (s + e) / 2;
//     while (s <= e)
//     {
//         if (arr[mid] == k)
//         {
//             return mid;
//         }
//         else if (arr[mid] < k)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = (s + e) / 2;
//     }
//     return -1;
// }
// int search(vector<int> &arr, int n, int k)
// {
//     int p = pivot(arr, n);
//     if ((k >= arr[p]) && (k <= arr[n - 1]))
//     {
//         return binSearch(arr, n, p, n - 1, k);
//     }
//     else
//     {
//         return binSearch(arr, n, 0, p - 1, k);
//     }
// }

// 17) square-root-of-a-number (TLE for binary search method) (no TLE for linear search method) (codestudio)
// https://www.codingninjas.com/studio/problems/square-root-integral_893351
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// int floorSqrt(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     };
//     // cout<<"algo called"<<endl;
//     vector<int> vect;
//     for(int i = 1; i<=n; i++)
//     {
//         vect.push_back(i);
//     };
//     int start = 0;
//     int end = vect.size() - 1;
//     int answer;
//     while(start<=end)
//     {
//         int midInd = start + (end-start)/2;
//         int midElem = vect[midInd];
//         if(n<midElem*midElem)
//         {
//             end = midInd - 1;
//         }
//         else if (n==midElem*midElem)
//         {
//             return midElem;
//         }
//         else
//         {
//             answer = midElem;
//             start = midInd + 1;
//         };
//     };
//     return answer;
// };
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     // cout<<"calling algo"<<endl;
//     for(int i = 0; i<=n; i++)
//     {
//         cout<<"square root of "<<i<<" is "<<floorSqrt(i)<<endl;
//     }
//     return 0;
// };

// XAMPLE) FLOATING SQUARE ROOT
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// long double floorSqrt(int n, int p)
// {
//     if(n==0)
//     {
//         return 0;
//     };
//     // cout<<"algo called"<<endl;
//     vector<int> vect;
//     for(int i = 1; i<=n; i++)
//     {
//         vect.push_back(i);
//     };
//     int start = 0;
//     int end = vect.size() - 1;
//     long double answer;
//     while(start<=end)
//     {
//         int midInd = start + (end-start)/2;
//         int midElem = vect[midInd];
//         if(n<midElem*midElem)
//         {
//             end = midInd - 1;
//         }
//         else if (n==midElem*midElem)
//         {
//             return midElem;
//         }
//         else
//         {
//             answer = midElem;
//             start = midInd + 1;
//         };
//     };
//     double multiplier = 1;
//     for(int i = 1; i<=p; i++)
//     {
//         multiplier/=10;
//         // cout<<multiplier<<endl;
//         for(; answer*answer<=n; answer+=multiplier)
//         {
//             // cout<<"checking for "<<answer<<endl;;
//         };
//         answer-=multiplier;
//         // cout<<"answer is "<<answer<<endl;
//     };
//         return answer;
// };
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"square root of "<<n<<" is "<<floorSqrt(n,10)<<endl;
//     return 0;
// };

// 18) 🟩 selection-sort (done) (codestudio)
// "Iteratively select the minimum element and place it at the beginning of the unsorted portion by swapping."
// after each step the smallest element in the unsorted part of the array goes to it's correct position
// https://www.codingninjas.com/studio/problems/selection-sort_624469?leftPanelTabValue=SUBMISSION
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// void selectionSort(vector<int> &vect)
// {
//     int n = vect.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minInd = i;
//         for (int j = i; j < n; j++)
//         {
//             if (vect[j] < vect[minInd])
//             {
//                 minInd = j;
//             };
//         };
//         if (minInd != i)
//         {
//             swap(vect[i], vect[minInd]);
//         }
//     };
// };
// int main()
// {
//     // vector<int> vect = {64, 25, 12, 22, 11};
//     vector<int> vect = {1, 7, 9, 2, 3, 0};
//     int n = vect.size();
//     for (int i = 0; i < n; i++)
//     {
//         cout << vect[i] << " ";
//     };
//     cout << endl;
//     selectionSort(vect);
//     for (int i = 0; i < n; i++)
//     {
//         cout << vect[i] << " ";
//     };
//     return 0;
// };

// 19) 🟩 bubble-sort (done) (codestudio)
// https://www.codingninjas.com/studio/problems/bubble-sort_980524
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// void bubbleSort(vector <int> &vect)
// {
//     int n = vect.size();
//     for(int i = 0; i<n-1; i++)
//     {
//         for(int j = 0; j<n-1-i; j++)
//         {
//             if(vect[j]>vect[j+1])
//             {
//                 swap(vect[j],vect[j+1]);
//             };
//         };
//     };
// };
// int main()
// {
//     // vector<int> vect = {10, 1, 7, 6, 14, 9};
//     vector<int> vect = {6,2,8,4,10};
//     // vector<int> vect = {1,2,3,4,5};
//     for (int i = 0; i < vect.size(); i++)
//     {
//         cout << vect[i] << " ";
//     };
//     cout << endl;
//     bubbleSort(vect);
//     for (int i = 0; i < vect.size(); i++)
//     {
//         cout << vect[i] << " ";
//     };
//     return 0;
// };

// 20) 🟩 insertion-sort (done) (codestudio)
// https://www.codingninjas.com/studio/problems/insertion-sort_3155179?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=SUBMISSION
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// void insertionSort(int n, vector<int> &arr){
//     for(int i = 1; i<n; i++)
//     {
//         int checkInd = i;
//         for(int j = i-1; j>=0; j--)
//         {
//             // cout<<"i = "<<i<<" j = "<<j<<endl;
//             if(arr[checkInd]<arr[j])
//             {
//                 // cout<<"swap"<<endl;
//                 swap(arr[checkInd],arr[j]);
//                 checkInd = j;
//             };
//         };
//     // for (int k = 0; k < vect.size(); k++)
//     // {
//     //     cout << vect[k] << " ";
//     // };
//     // cout << endl;
//     }
// }

// 21)  reverse-the-array (done) (codestudio)
// https://www.codingninjas.com/studio/problems/reverse-the-array_1262298
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// void reverseArray(vector<int> &arr , int m)
// {
//     int start = m+1;
//     int end = arr.size()-1;
//     while(start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     };
// };
// int main()
// {
//     vector<int> vect {1,2,3,4,5,6};
//     for(int i = 0; i<vect.size(); i++){
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
//     reverseArray(vect,3);
//     for(int i = 0; i<vect.size(); i++){
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
// };

// 22)  merge-sorted-array (done) (leetcode)
// https://leetcode.com/problems/merge-sorted-array/
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// using namespace std;
// FIRST APPROACH
// void merge(vector<int> vect1, vector<int> vect2)
// {
//     vector<int> vect3;
//     int i = 0;
//     int j = 0;
//     int count = 0;
//     while (i < vect1.size() || j < vect2.size())
//     {
//         cout << "count = " << count << endl;
//         count++;
//         if (j == vect2.size())
//         {
//             vect3.push_back(vect1[i]);
//             i++;
//         }
//         else if (i == vect1.size())
//         {
//             vect3.push_back(vect2[j]);
//             j++;
//         }
//         else
//         {
//             if (vect1[i] < vect2[j])
//             {
//                 vect3.push_back(vect1[i]);
//                 i++;
//             }
//             else if (vect1[i] > vect2[j])
//             {
//                 vect3.push_back(vect2[j]);
//                 j++;
//             }
//             else
//             {
//                 vect3.push_back(vect1[i]);
//                 i++;
//                 vect3.push_back(vect2[j]);
//                 j++;
//             };
//         };
//     };
//     for (int i = 0; i < vect3.size(); i++)
//     {
//         cout << vect3[i] << " ";
//     };
// }
// SECOND APPROACH
// void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
// {
//     vector<int> nums3(nums1);
//     nums1.clear();
//     int i = 0;
//     int j = 0;
//     while(i<m && j<n)
//     {
//         if(nums3[i]<nums2[j])
//         {
//             nums1.push_back(nums3[i]);
//             i++;
//         }
//         else if(nums3[i]>nums2[j])
//         {
//             nums1.push_back(nums2[j]);
//             j++;
//         }
//         else
//         {
//             nums1.push_back(nums2[j]);
//             nums1.push_back(nums1[i]);
//             j++;
//             i++;
//         };
//     };
//     while (i<m)
//     {
//         nums1.push_back(nums3[i]);
//         i++;
//     };
//     while (j<n)
//     {
//         nums1.push_back(nums2[j]);
//         j++;
//     };
// };
// THIRD APPROACH
// void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
// {
// vector<int> nums3(nums1);
// nums1.clear();
// int i = 0;
// int j = 0;
// int k = 0;
// while(i<m && j<n)
// {
//     if(nums3[i]<nums2[j])
//     {
//         nums1[k] = nums3[i];
//         k++;
//         i++;
//     }
//     else
//     {
//         nums1[k] = nums2[j];
//         k++;
//         j++;
//     }
// };
// while (i<m)
// {
//     nums1[k] = nums3[i];
//     i++;
//     k++;
// };
// while (j<n)
// {
//     nums1[k] = nums2[j];
//     j++;
//     k++;
// };
// };
// int main()
// {
//     vector<int> vect1 = {1, 3, 5, 7, 9};
//     vector<int> vect2 = {2, 4, 6};
//     merge(vect1, vect2);
//     return 0;
// };

// 23) move-zeroes (done) (leetcode)
// https://leetcode.com/problems/move-zeroes/description/
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// void moveZeroes(vector<int> &nums)
// {
//     vector<int> resVector;
//     int n = nums.size();
//     int zeroCount = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] == 0)
//         {
//             zeroCount++;
//         }
//         else
//         {
//             resVector.push_back(nums[i]);
//         };
//     };
//     for (int j = 0; j < zeroCount; j++)
//     {
//         resVector.push_back(0);
//     };
//     for (int k = 0; k < n; k++)
//     {
//         nums[k] = resVector[k];
//     };
// }
// SECOND APPROACH (WORKING ON LOCAL BUT NOT ON LEETCODE)
// void moveZeroes(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> vect;
//     for(int i = 0; i<n; i++)
//     {
//         if(nums[i]!=0)
//         {
//             vect.push_back(nums[i]);
//         };
//     };
//     int i = 0;
//     int j = n-1;
//     int zeroCount = 0;
//     int count = 1;
//     while (i<j)
//     {
//         // cout<<"count = "<<count<<endl;
//         count++;
//         if(nums[i]==0 && nums[j]!=0)
//         {
//             zeroCount++;
//             swap(nums[i],nums[j]);
//             i++;
//             j--;
//         }
//         else if (nums[i]!=0 && nums[j]==0)
//         {
//             zeroCount++;
//             j--;
//         }
//         else
//         {
//             i++;
//         };
//     };
//     // cout<<zeroCount<<" zeroes"<<endl;
//     for(int i = 0; i<n; i++)
//     {
//         cout<<nums[i]<<" ";
//     };
//     cout<<endl;
//     for(int i = 0; i<n-zeroCount; i++)
//     {
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
//     for(int i = 0; i<n-zeroCount; i++)
//     {
//         nums[i] = vect[i];
//     };
// };
// THIRD APPROACH (MY APPROACH AFTER SIR'S SOLUTION)
// void moveZeros(vector<int> &nums)
// {
//     int count = 1;
//     cout<<"working starts"<<endl;
//     for(int i = 0; i<nums.size(); i++)
//     {
//         if(nums[i]==0)
//         {
//         cout<<"count = "<<count<<endl;
//         count++;
//             bool allZeroes = true;
//             for(int j = i+1; j<nums.size(); j++)
//             {
//                 if(nums[j]!=0)
//                 {
//                     allZeroes = false;
//                     swap(nums[i],nums[j]);
//                     break;
//                 }
//             };
//             if(allZeroes)
//             {
//                 return;
//             }
//             for(int k = 0; k<nums.size(); k++)
//             {
//                 cout<<nums[k]<<" ";
//             };
//             cout<<endl;
//         };
//     };
// };
// FOURTH APPROACH (SIR'S SOLUTION)
// void moveZeros(vector<int> &nums)
// {
//     int nonZero = 0;
//     for(int j = 0; j<nums.size(); j++)
//     {
//         if(nums[j]!=0)
//         {
//             swap(nums[nonZero],nums[j]);
//             nonZero++;
//         }
//     };
// };
// int main()
// {
//     vector<int> vect = {0,2,0,1,0};
//     int n = vect.size();
//     for(int i = 0; i<n; i++)
//     {
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
//     moveZeros(vect);
//     for(int i = 0; i<n; i++)
//     {
//         cout<<vect[i]<<" ";
//     };
// };

// 24)  FAST EXPONENTIATE
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

// 25)  FIND GCD USING EUCLID'S ALGORITHM
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

// 26)  CHECK IF PRIME USING SIEVE OF ERATOSTHENES
// #include<iostream>
// #include<algorithm>
// #include<cmath>
// #include<vector>
// using namespace std;
// int countPrimes(int n)
// {
//     int primeCount = 0;
//     vector<int> prime(n+1, true);
//     for(int i = 2; i<n; i++)
//     {
//         if(prime[i])
//         {
//             // cout<<i<<" is prime"<<endl;
//             primeCount++;
//             for(int k = 2*i; k<n; k+=i)
//             {
//                 prime[k] = 0;;
//             }
//         }
//     }
//     return primeCount;
// };
// int main()
// {
//     int n;
//     cout<<"Enter the number: "<<endl;
//     cin>>n;
//     cout<<countPrimes(n)<<endl;
// };

// 27) MODULAR EXPONENTIATION (DOUBT)
// https://www.codingninjas.com/studio/problems/modular-exponentiation_1082146

// 28)  LENGTH OF A STRING
// #include<iostream>
// #include<algorithm>
// #include<cmath>
// #include<vector>
// using namespace std;
// int getLength(char name[])
// {
//     int length = 0;
//     for(int i = 0; name[i]!='\0'; i++)
//     {
//         length++;
//     };
//     return length;
// };
// int main()
// {
//     char name[10];
//     cout<<"Enter the name "<<endl;
//     cin>>name;
//     // OBSERVATION 1
//     cout<<getLength(name)<<endl;
//     name[2] = '\0';
//     // OBSERVATION 2
//     cout<<getLength(name)<<endl;
// };

// 29)  REVERSE A STRING
// #include<iostream>
// #include<algorithm>
// #include<cmath>
// #include<vector>
// using namespace std;
// int lengthOfString(char arr[])
// {
//     int length = 0;
//     for(int i = 0; arr[i]!='\0'; arr++)
//     {
//         length++;
//     };
//     return length;
// }
// void reverseString(char arr[])
// {
//     int i = 0;
//     int j = lengthOfString(arr)-1;
//     while (i<j)
//     {
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     };
// }
// int main()
// {
//     char name[5];
//     cout<<"enter the name: ";
//     cin>>name;
//     cout<<"name is "<<name<<endl;
//     reverseString(name);
//     cout<<"name is "<<name<<endl;
// };

// 30)  reverse-string (done) (leetcode)
// https://leetcode.com/problems/reverse-string/

// 31)  check-if-the-string-is-a-palindrome (done) (codestudio)
// https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633
// #include <bits/stdc++.h>
// using namespace std;
// bool checkPalindrome(string s)
// {
//     vector <char> vect;
//     for(int i = 0; i<s.length(); i++)
//     {
//         if((int(s[i])>=97 && int(s[i])<=122) || (int(s[i])>=48 && int(s[i])<=57))
//         {
//             vect.push_back(s[i]);
//         }
//         else if ((int(s[i])>=65) && (int(s[i]<=90)))
//         {
//             vect.push_back(s[i]+32);
//         }
//         else
//         {
//         };
//     };
//     int i = 0;
//     int j = vect.size()-1;
//     bool palin = true;
//     while(i<j)
//     {
//         if(vect[i]!=vect[j])
//         {
//             palin = false;
//             break;
//         };
//         i++;
//         j--;
//     };
//     return palin;
// };
// int main()
// {
//     string s = "chi1@1IHC";
//     cout<<checkPalindrome(s)<<endl;
// }

// 32)  reverse-words-in-a-string (done) (leetcode)
// https://leetcode.com/problems/reverse-words-in-a-string/description/

// 33) maximum-occuring-character (done) (geeksforgeeks)
// https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// char getMaxOccuringChar(string str)
// {
//     vector<int> vect(26,0);
//     for(int i = 0; i<str.length(); i++)
//     {
//         vect[int(str[i])-97]++;
//     };
//     auto it = max_element(vect.begin(),vect.end());
//     int maxInd = distance(vect.begin(),it);
//     return char(maxInd+97);
// }
// int main()
// {
//     string naam;
//     cout<<"ENTER YOUR NAME: ";
//     cin>>naam;
//     cout<<getMaxOccuringChar(naam)<<endl;
//     return 0;
// };

// 34) replace-spaces (done) (codestudio)
// https://www.codingninjas.com/studio/problems/replace-spaces_1172172?leftPanelTabValue=PROBLEM

// 35) remove-all-occurrences-of-a-substring (done) (leetcode)
// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/

// 36) print-like-a-wave (done) (codestudio)
// https://www.codingninjas.com/studio/problems/print-like-a-wave_893268
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector<int> resVector;
//     int fromuP = 1;
//     for (int j = 0; j < mCols; j++)
//     {
//         for (int i = 0; i < nRows; i++)
//         {
//             if (fromuP)
//             {
//                 resVector.push_back(arr[i][j]);
//             }
//             else
//             {
//                 resVector.push_back(arr[nRows - i - 1][j]);
//             };
//         };
//         if (fromuP == 0)
//         {
//             fromuP = 1;
//         }
//         else
//         {
//             fromuP = 0;
//         };
//     }
//     return resVector;
// }
// int main()
// {
//     vector<vector<int>> vect = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     int nRows = 3;
//     int mCols = 4;
//     vector<int> vect = wavePrint(vect, nRows, mCols);
//     for(int i = 0; vect.size(); i++)
//     {
//         cout<<vect[i]<<" ";
//     };
//     cout<<endl;
//     return 0;
// }

// 37)  allocate-books (done) (codestudio)
// https://www.codingninjas.com/studio/problems/allocate-books_1090540?leftPanelTabValue=PROBLEM
// bool allowed(int midElem, vector<int> &arr, int n, int m)
// {
//     // cout<<"allowed function called"<<endl;
//     int studentCount = 1;
//     int pageSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (pageSum + arr[i] <= midElem)
//         {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if (studentCount > m)
//             {
//                 return false;
//             };
//             pageSum = arr[i];
//         };
//     };
//     return true;
// };
// int findPages(vector<int> &arr, int n, int m)
// {
//     if (m > n)
//     {
//         return -1;
//     };
//     int totalSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         totalSum += arr[i];
//     };
//     int start = *(max_element(arr.begin(), arr.end()));
//     // int end = *(max_element(arr.begin(),arr.end()));
//     int end = totalSum;
//     int answer;
//     int count = 0;
//     while (start <= end)
//     {
//         count++;
//         int midElem = start + (end - start) / 2;
//         if (allowed(midElem, arr, n, m))
//         {
//             answer = midElem;
//             end = midElem - 1;
//         }
//         else
//         {
//             start = midElem + 1;
//         };
//     };
//     return answer;
// };

// 38)  painter-s-partition-problem (done) (codestudio)
// https://www.codingninjas.com/studio/problems/painter-s-partition-problem_1089557
// bool possible(int midElem, vector<int> boards, int n, int k)
// {
//     int painterCount = 1;
//     int boardSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (boardSum + boards[i] <= midElem)
//         {
//             boardSum += boards[i];
//         }
//         else
//         {
//             painterCount++;
//             if (painterCount > k)
//             {
//                 return false;
//             };
//             boardSum = boards[i];
//         };
//     };
//     return true;
// }
// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     //    Write your code here.
//     int n = boards.size();
//     if (k > n)
//     {
//         return -1;
//     };
//     int totalSum = 0;
//     for (int i = 0; i < boards.size(); i++)
//     {
//         totalSum += boards[i];
//     };
//     int start = *(max_element(boards.begin(), boards.end()));
//     int end = totalSum;
//     int answer;
//     while (start <= end)
//     {
//         int midElem = start + (end - start) / 2;
//         if (possible(midElem, boards, n, k))
//         {
//             answer = midElem;
//             end = midElem - 1;
//         }
//         else
//         {
//             start = midElem + 1;
//         };
//     };
//     return answer;
// }

// 39) spiral-matrix (done) (leetcode)
// time complexity is O(n*m)
// https://leetcode.com/problems/spiral-matrix/description/

// 40) rotate-image (done) (leetcode)
// time complexity is (n^2)
// https://leetcode.com/problems/rotate-image/description/

// 41) check-if-array-is-sorted-and-rotated (done) (leetcode)
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

// 42) rotate-array (done) (leetcode)
// https://leetcode.com/problems/rotate-array/description/

// 43) sum-of-two-arrays (done) (leetcode)
// https://www.codingninjas.com/studio/problems/sum-of-two-arrays_893186

// 44) 