#include<bits/stdc++.h>
using namespace std;
int main()
{
    int distance1,distance2,count1=0,count2=0;
    cin>>distance1>>distance2;
    int appletrees,orangetrees;
    cin>>appletrees>>orangetrees;
    int apple,orange;
    cin>>apple>>orange;
    int appledistance[apple],orangedistance[orange];
    for(int i=0;i<apple;++i)
    {
        cin>>appledistance[i];
    }
    for(int i=0;i<orange;++i)
    {
        cin>>orangedistance[i];
    }
    for(int i=0;i<apple;++i)
    {
        int sum=0;
        sum=appletrees+appledistance[i];
        if(sum>=distance1&&sum<=distance2)
        {
            count1++;
            sum=0;
        }
        sum=0;
    }
    for(int i=0;i<orange;++i)
    {
        int sum=0;

        sum=orangetrees+orangedistance[i];
        if(sum>=distance1&&sum<=distance2)
        {
            count2++;
            sum=0;
        }
        sum=0;
    }
    cout<<count1<<endl;
    cout<<count2<<endl;
}
