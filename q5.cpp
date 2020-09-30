//Memory and Trident
//https://codeforces.com/problemset/problem/712/B
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.length();
int l=count(s.begin(),s.end(),'L');
int r=count(s.begin(),s.end(),'R');
int u=count(s.begin(),s.end(),'U');
int d=count(s.begin(),s.end(),'D');
int ans=0;
if(n&1)
    cout<<"-1";
    else{
         cout<<((abs(l-r)+abs(u-d)))/2;
    }

return 0;
 }
