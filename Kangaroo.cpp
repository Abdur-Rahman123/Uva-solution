#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main()
{
    int kangaroo1,kangaroo2,distance1,distance2,sum3=0,sum1=0,sum2=0,sum4=0,number=0;
    cin>>kangaroo1>>distance1>>kangaroo2>>distance2;
    sum1=distance1+kangaroo1;
    sum2=distance2+kangaroo2;
    if(sum1==sum2)
        {
            cout<<"YES"<<endl;
        }
        sum3=sum1;
        sum4=sum2;
    for(int i=0;i<10000;++i)
    {
        sum3+=distance1;
        sum4+=distance2;
        if(sum3==sum4)
        {
            cout<<"YES"<<endl;
            number++;
            break;
        }
    }
    if(number==0&&sum1!=sum2)
    {
       cout<<"NO"<<endl;
    }

}
