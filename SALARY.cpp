#include<iostream>
#include<algorithm>
using namespace std;
long arraySum (long arr[], int n) 
{ 
    long int sum = 0; 
    for (int i=0; i<n; sum+=arr[i++]); 
    return sum; 
} 
 
int main() {
	// your code goes here
   int t,n;
   cin>>t;
   while(t--)
   {
   	cin>>n;
   	long w[n];
   	int i,count=0;
   	for(i=0;i<n;i++)
   	cin>>w[i];
   	sort(w,w+n);
   	cout<<(arraySum(w,n)-n*w[0])<<endl;
   }
 
	return 0;
}