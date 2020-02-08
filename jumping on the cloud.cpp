//https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
//Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int input,j=0,step=0;
    cin>>input;
    int arr[input];
    for(int i=0;i<input;i++)
    {
        cin>>arr[i];
    }
    while(j<input-1)
    {
        if(arr[j+2]==1)
        {
           j++;
           step++;
        }
        else
        {
            j=j+2;
            step++;
        }
    }
    cout<<step<<endl;
}
