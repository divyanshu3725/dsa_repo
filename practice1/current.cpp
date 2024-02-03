// STRINGS
// strings are nothing but one dimensional character arrays
// #include <iostream>
// using namespace std;
// int main()
// {
//     string naam = "chinu";
//     cout<<naam<<endl;
//     cout<<naam[0]<<endl;
//     cout<<naam[1]<<endl;
//     cout<<naam[2]<<endl;
//     cout<<naam[3]<<endl;
//     cout<<naam[4]<<endl;
//     return 0;
// };

// CHARACTER ARRAYS
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// int main()
// {
//     // TAKING INPUT 
//     char name[5];
//     cin>>name;
//     // cout<<name<<endl;
//     // OBSERVATION 1
//     // if we supply chinu as input then the first remaining box of the array will be assigned null character which is ascii 0
//     // this null character indicates where to stop the printing when printing is to be done
//     // OBSERVATION 2
//     // if we supply chinu boy then only chinu will be printed
//     // cin stops execution when it recieves a new line character or a tab or a space
//     // OBSERVATION 3
//     // supplying new line character at one index
//     // name[2] = '\n';
//     // this will give ch and then nu is new line because of the \n character
//     // OBSERVATION 4
//     // supplying \0 character at one index
//     // cout<<name<<endl;
//     // name[2] = '\0';
//     // cout<<name<<endl;
//     // this will give only ch because of \0, but what is \0? DOUBT
//     return 0;
// };

// LENGTH OF A STRING
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

// REVERSE A STRING
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
