#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
string removeOccurrences(string s, string part) {
    while(true)
    {
        size_t checking = s.find(part);
        if(checking==string::npos)
        {
            break;
        }
        else
        {
            s.erase(checking,part.length());
        };
    };
    return s;
};
int main(){
    // string str = "daabcbaabcbc";
    // string part = "abc";
    string str = "axxxxyyyyb";
    string part = "xy";
    cout<<removeOccurrences(str,part)<<endl;
    return 0;
};