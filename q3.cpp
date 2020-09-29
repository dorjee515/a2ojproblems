//Building Permutation
//link https://codeforces.com/problemset/problem/285/C
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll int n;
cin>>n;
ll int arr[n];
for(ll int i=0;i<n;i++)cin>>arr[i];
sort(arr,arr+n);
ll int cnt=0;
for(ll int i=0;i<n;i++){
 if(arr[i]!=i+1){
   cnt+=abs((arr[i])-(i+1));
   }
 }
 cout<<cnt<<endl;
return 0;
}
