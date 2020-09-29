//Different is Good
//https://codeforces.com/problemset/problem/672/B
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
set<int> s1;
for(int i=0;i<n;i++)
s1.insert(s[i]);
int z=s1.size();
int ans;
ans=abs(z-n);
if(n>26)
    cout<<"-1";
else
cout<<ans<<endl;
return 0;
}
