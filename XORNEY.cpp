#include <bits/stdc++.h>
using namespace std;
unsigned long long fxn_xor(unsigned long long n)
{
unsigned long long a[]={n,1,n+1,0};
  return a[n%4];
}
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
unsigned long t;
cin>>t;
unsigned long long int l,r,result;
while(t--)
{
  cin>>l>>r;
  result=(fxn_xor(l-1)^fxn_xor(r));
  if(result%2==0)
  cout<<"Even"<<endl;
  else
  cout<<"Odd"<<endl;
}
}
