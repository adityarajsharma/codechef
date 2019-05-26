#include<iostream>
using namespace std;
int main()
{
short int a,b,c,d,t,i;
cin >>t;
for(i=0;i<t;i++)
{
cin>>a>>b>>c>>d;
cout <<endl;
if(((a==b)&&(c==d))||((a==c)&&(b==d))||((a==d)&&(b==c)))
cout << "YES"<<endl;
else
cout<<"NO"<<endl;
}
}
