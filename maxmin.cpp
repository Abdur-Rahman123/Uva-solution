#include<iostream>
using namespace std;
int main()
{
    long long int arr[5],sum=0;
    for(int i=0;i<5;++i)
    {
        cin>>arr[i];
    }
    long long int maximum=arr[0];
    long long int minimum=arr[0];
    for(int i=0;i<5;++i)
    {
       maximum=max(maximum,arr[i]);
       minimum=min(minimum,arr[i]);
       sum+=arr[i];
    }
    cout<<sum-maximum<<" "<<sum-minimum<<endl;
}
