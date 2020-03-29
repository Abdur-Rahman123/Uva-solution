#include<bits/stdc++.h>
using namespace std;
int counter(int number)
{
    static int i=0;
   if(number!=0)
   {
      if(number>=10)
      {
          i++;
          counter(number-10);
      }
      else if(number>=5)
      {
          i++;
          counter(number-5);
      }
      else if(number>=1)
      {
          i++;
          counter(number-1);
      }
   }
   else{
    return i;
   }
}
int main()
{
    int n;
    cin>>n;
    int k=counter(n);
    cout<<k;
}
