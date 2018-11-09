#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d=0;
    while(cin>>a)
    {
        for(int i=1;i<=a;i++)
        {
            cin>>b;
            for(int j=0;j<b;j++)
            {
                cin>>c;
                if(c>d)
                {
                    d=c;
                }
            }
            cout<<"case"<<" "<<i<<" "<<d;
        }
    }
}
