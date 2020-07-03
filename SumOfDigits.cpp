#include<bits/stdc++.h>
using namespace std;
int main()
{
int num,k=0;
cin>>num;
vector<int>v;
while(num!=0)
{
int n=num%10;
v.push_back(n);
num/=10;
}
for(int i=0;i<v.size();i++)
{
k+=v[i];
}
cout<<k;
} 