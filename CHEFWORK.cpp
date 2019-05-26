#include<iostream>
using namespace std;
int main()
{
int n,i;
cin>>n;
int c[n];
short int t[n];
for(i=0;i<n;i++)
cin>>c[i];
for(i=0;i<n;i++)
cin>>t[i];
int store1=100001,store2=100001,store3=100001;
for(i=0;i<n;i++)
{
if(t[i]==1&&store1>c[i])
store1=c[i];
else if(t[i]==2&&store2>c[i])
store2=c[i];
else if(t[i]==3&&store3>c[i])
store3=c[i];
}
if((store1+store2)<store3)
cout<<store1+store2<<endl;
else
cout << store3<<endl;
}
