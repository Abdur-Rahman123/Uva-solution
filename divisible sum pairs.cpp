//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
//Accepted..
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int input,k,countl=0;
    cin>>input>>k;
    int arr[input];
    for(int i=0;i<input;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<input;i++)
    {
        for(int j=i+1;j<input;j++)
        {
            int sum=arr[i]+arr[j];
            if(sum%k==0)
            {
                countl++;
            }
        }
    }
    cout<<countl<<endl;
}
