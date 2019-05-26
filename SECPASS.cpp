#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    long n,i,j=0,max=0,loc=0,k=0;
	    cin>>n;
	    string str;
	    long count[n];
	    getline(cin,str);
	    while(str.length()==0)
	    getline(cin,str);
       for(i=0;i<n;i++)
        count[i]=1;
	    for(i=1;i<n;i++)
	    {
	     if(str[i]==str[0])
          {
          k=0;
          loc=i;
          while((str[i]==str[k])&&i<n&&k<loc)
{
           count[k]++;
i++;
k++;
}
          if(loc<k)
           loc=k;
	    }
	    }
if(i==n&&k==0)
cout<<str<<endl;
else{
for(i=0;i<loc;i++)
if(max<=count[i])
{
max=count[i];
j=i;
}
cout<<str.substr(0,j+1)<<endl;
	}
}
	return 0;
}
