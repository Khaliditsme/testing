
#include<bits/stdc++.h>
using namespace std;


bool ispalindrome(string str){
    int low=0, high=str.size()-1;
    while(low<=high){
        if(str[low]!=str[high]) return false;
        low++; high--;
    }
    return false;
}


int main(){
    string str="abba";
    bool ans=ispalindrome(str);
    if(ans) cout<<"String is Palindrome"<<endl;
    else cout<<"String is not Palindrone"<<endl;
}