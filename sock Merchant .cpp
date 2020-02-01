//Accepted..
//https://www.hackerrank.com/challenges/sock-merchant/problem
#include<bits/stdc++.h>
using namespace std;
int arr[101];
int main()
{
  int input,sum=0,pairs=0;
  cin>>input;
   memset(arr,0,sizeof(arr));
  for(int i=0;i<input;i++)
  {
      int temp=0;
      cin>>temp;
      arr[temp]++;
      if(arr[temp]==2)
      {
          arr[temp]=0;
            pairs++;
      }
  }
  cout<<pairs<<endl;

}
