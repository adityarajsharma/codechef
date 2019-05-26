#include <iostream>
using namespace std;
long int leap(long int yb,long int mb,long int n)
{
	if(mb<=n)
	yb--;
	return (yb/4); 
}

int main() {
int t;
long int n,yb,yc,mb,mc,db,dc,i;
cin>>t;
while(t--)
{
	cin>>n;
    long a[n],s=0,net;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	s+=a[i];
	}
	cin>>yb>>mb>>db;
	cin>>yc>>mc>>dc;
	long int n1=yb*s+db;
	for(i=0;i<mb-1;i++)
	n1+=a[i];
	n1+=leap(yb,mb,n);
    long int n2=yc*s+dc;
    for(i=0;i<mc-1;i++)
	n2+=a[i];
	n2+=leap(yc,mc,n);
	net=n2-n1+1;
	cout<<net<<endl;
}
	return 0;
}