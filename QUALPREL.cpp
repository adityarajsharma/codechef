#include <iostream>
#include<algorithm>
using namespace std;

int main() {
long long int t;
long long int k,n,i=0,count;
cin>>t;
while(t--)
{  
	count=0;
	cin>>n>>k;
	long long int s[n];
	for(i=0;i<n;i++)
	cin>>s[i];
	sort(s,s+n,greater<int>());
	long long int min=s[k-1];
	i=0;
	while(i<n)
	{
		if(s[i]>=min)
		count++;
		i++;
	}
	cout<<count<<endl;
}
	return 0;
}