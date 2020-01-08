#include<iostream>
using namespace std;
void staircase(int number)
{
 for(int i=1;i<=number;++i)
 {
     for(int j=1;j<=i;++j)
     {
         int k=number-i;
         if(j==1)
         {
         while(k--)
         {
             cout<<" ";
             //k--;
         }
         }
         cout<<"#";
     }
     cout<<endl;
 }
}
int main()
{
  int n;
  cin>>n;
  staircase(n);
}
