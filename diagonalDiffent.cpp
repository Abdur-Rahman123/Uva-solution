#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,sum=0,sum1=0,sum2=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
              sum+=arr[i][j];
            }
             if(i==n-j-1)
            {
                sum1+=arr[i][j];
            }
        }
    }
    //cout<<sum<<endl;
    //cout<<sum1<<endl;
    sum2=sum-sum1;
    cout<<abs(sum2)<<endl;
}
