#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
int t;
unsigned long long int n,a,b,k,count1,count2,count3;
cin>>t;
while(t--)
{
cin>>n>>a>>b>>k;
count1=0;
count2=0;
count3=0;
if(a==b)
{
    cout<<("Lose\n");
    continue;
}
if(b%a==0)
{
count1=n/a;
count3=n/b;
if((count1-count3)>=k)
{
cout<<("Win\n");
}
else
{
    cout<<("Lose\n");
}
continue;
}
if(a%b==0){
count2=n/b;
count3=n/a;
if((count2-count3)>=k)
{
cout<<("Win\n");
}
else
{
    cout<<("Lose\n");
}
continue;
}
count1=n/a;
count2=n/b;
count3=n/(a*b);
if((count1+count2-count3)>=k)
cout<<"Win"<<endl;
else
cout<<("Lose\n");
}

return 0;
}