#include<iostream>
using namespace std;
int main()
{
    int par,bug,hote,we,pri,bed,mini;
    while(cin>>par>>bug>>hote>>we)
    {
        while(hote--)
        {
            cin>>pri;
            for(int i=0;i<we;i++)
            {
                cin>>bed;
                if(bed>=par)
                {
                  mini=min(mini,pri*par);
                }
            }
        }
        if(mini<=bug)
        {
            cout<<mini<<endl;
        }
        else
        {
            cout<<"Stay home"<<endl;
        }
    }
    return 0;
}
