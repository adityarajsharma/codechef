#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k=0,sum1=0,sum2=0;
	    cin>>n>>m;
	    int a[n][m],b[n*m];
	    for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++){
	    cin>>a[i][j];
	    b[k++]=a[i][j];
	    }
	    sort(b,b+k,greater<int>());
	    for(int i=0;i<k;i+=2)
	    sum1+=b[i];
	    for(int i=1;i<k;i+=2)
	    sum2+=b[i];
	    if(sum1>sum2)
	    cout<<"Cyborg"<<endl;
	    else if(sum1==sum2)
	    cout<<"Draw"<<endl;
	    else
	    cout<<"Geno"<<endl;
	}
	return 0;
}
