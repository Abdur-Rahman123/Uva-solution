//https://www.hackerrank.com/challenges/bon-appetit/problem
//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int input,notpay,total=0,actual=0,charge,actualtotal=0;
    cin>>input>>notpay;
    int arr[input];
    for(int i=0;i<input;i++)
    {
        cin>>arr[i];
    }
    cin>>charge;
    for(int i=0;i<input;i++)
    {
        total+=arr[i];
        if(i!=notpay)
        {
            actual+=arr[i];
        }
    }
    actualtotal=actual/2;
    if(charge==actualtotal)
    {
        cout<<"Bon Appetit"<<endl;
    }
    else
    {
        cout<<charge-actualtotal<<endl;
    }
}
