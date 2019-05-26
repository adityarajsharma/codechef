#include<iostream>
using namespace std;
int main()
{
  short t,n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    short int i=0,j,k,a[n],b=6,f=6;
    for(i=0;i<n;i++)
    cin>>a[i];
    i=0;
    while(a[i]!=7&&i<n)
    i++;
    if(i==n)
    cout<<"no"<<endl;
    else
    {
      j=i;
      while(a[j]==7)
      j++;
      i=i-1;
      while((a[i]==a[j])&&i>=0&&j<n)
      {
      if(a[i]==b&&b>0)
      f=b-1;
      else if(a[i]==f&&f>0)
      {
      	b=f;
      	f=f-1;
      }
      else
      break;
      i--;
      j++;
      }
      if(i<0&&j==n&&f==0)
      cout<<"yes"<<endl;
      else
      cout<<"no"<<endl;
    }
  }
}