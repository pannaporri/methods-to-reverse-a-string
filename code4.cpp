// A simple C++ program to reverse string using constructor
#include <bits/stdc++.h>
using namespace std;
int main(){
 
    string str = "letsgrowtogether";
 
    //Use of reverse iterators
    string rev = string(str.rbegin(),str.rend());
 
    cout<<rev<<endl;
    return 0;
}