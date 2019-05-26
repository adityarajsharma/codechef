#include <iostream>
using namespace std;

int main() {
    long t,n;
    cin>>t;
    while(t--)
    {
    	long i,j,result=0;
    	cin>>n;
    	char a[n];
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	for (i=0; i<n; i++) 
        if(a[i]=='1')
        result++;
        result=result*(result+1)/2;
        cout<<result<<endl;
    }
	return 0;
}