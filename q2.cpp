//https://codeforces.com/problemset/problem/749/A
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int k=n/2;
cout<<k<<endl;
int sum=n;
    if(n&1){
       int m=(n/2)-1;
       for(int i=0;i<m;i++)
        cout<<'2'<<' ';
        cout<<'3'<<' ';
      }
     else {
        for(int i=0;i<k;i++)
            cout<<'2'<<' ';
     }

   return 0;
 }
