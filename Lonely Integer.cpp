//https://www.hackerrank.com/challenges/lonely-integer/problem
//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[101];
    memset(arr,0,sizeof(arr));
    int input;
    cin>>input;
    while(input--)
    {
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    for(int i=0;i<101;i++)
    {
        if(arr[i]==1)
        {
            cout<<i<<endl;
            break;
        }
    }
}
