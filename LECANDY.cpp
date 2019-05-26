#include <iostream>
using namespace std;

int main() {
long int t;
long int n,i;
long long c;
cin>>t;
while(t--)
{   
	cin>>n>>c;
	long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		c=c-a[i];
	}
	if(c>=0)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
	return 0;
}