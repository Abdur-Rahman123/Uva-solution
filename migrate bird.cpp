#include<iostream>
using namespace std;
int main()
{
    int input,maxi,ans,i;
    cin>>input;
    int arr[input],temp[6]={0};
    for(i=0;i<input;i++)
    {
        cin>>arr[i];
        temp[arr[i]]++;
        //cout<<h[a[i]]<<endl;
    }
    maxi=temp[1];
    for(i=2;i<6;i++)
    {
        if(maxi<temp[i])
        {
            maxi=temp[i];
            ans=i;
        }
    }
    cout<<ans<<endl;
}
