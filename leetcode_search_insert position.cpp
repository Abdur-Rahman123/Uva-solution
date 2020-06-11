#include <bits/stdc++.h>
using namespace std;

int index(int target,int arr[],int n)
{
cout<<n<<endl;
for(int i=0;i<n;i++)
{
if(arr[i]==target)
{return i;}
}
if(arr[0]>target)
{return 0;}
if(arr[n-1]<target)
{return n+1;}
for(int i=1;i<n-1;i++)
{
if(arr[i]>target && arr[i-1]<target) 
{
return i;
} 
}
}
int main() {
	int arr[5]={1,3,4,5,7};
 int n=sizeof(arr)/sizeof(arr[0]);
 cout<<index(6,arr,n);
	return 0;
}