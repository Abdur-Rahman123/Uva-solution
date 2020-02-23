#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target,left=0,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    for(int i=1;i<n;i++)
    {
     sum=target-arr[left];
     if(sum==arr[i])
     {
         cout<<left+1<<" "<<i+1;
     }
     else
     {
         left++;
     }
    }
}
