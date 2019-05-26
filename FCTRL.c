#include<stdio.h>
long long int f(long long int);
long long int z(long long int n)
{
long long int j,total=0;
for(j=5;j<=n;j++)
total=total+f(j);
return total;
}
long long int f(long long int j)
{
long long int c=0;
while(j%5==0)
{
c=c+1;
j=j/5;
}
return c;
}
int main()
{
long long int i,t,n;
scanf("%lld",&t);
for(i=0;i<t;i++)
{
scanf("%lld",&n);
printf("%lld\n",z(n));
}
return 0;
}
