#include<bits/stdc++.h>
using namespace std;
void primeNumber(int a)
{
while(a%2==0)
{
cout<<2<<endl;
a=a/2;
}
for(int i=3;i<=sqrt(a);i++)
{
while(a%i==0)
{
cout<<i<<endl;
a=a/i;
}
}
if(a>2)
{
cout<<a<<endl;
}
}
int main()
{
primeNumber(315);
}