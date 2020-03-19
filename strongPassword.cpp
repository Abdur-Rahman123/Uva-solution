#include<bits/stdc++.h>
using namespace std;
int minimum(int n,string password)
{
    string special="!@#$%^&*()-+";
    bool number=false,big=false,small=false,caps=false;
    int len=password.size();
    for(int i=0;i<len;i++)
    {
       if(password[i]>='a' && password[i]<='z')
       {
           small=true;
       }
       if(password[i]>='A' && password[i]<='Z')
       {
           big=true;
       }
       if(password[i]>='0' && password[i]<='9')
       {
           number=true;
       }
       if(special.find(password[i])!= string::npos)
       {
           caps=true;
       }
    }
    int ans=0;
    if(!small) ans++;
    if(!big) ans++;
    if(!caps) ans++;
    if(!number) ans++;
    if(len+ans<6)
        ans+=6-(len+ans);
    return ans;

}
int main()
{
    int n;
    string password;
    cin>>n;
    cin>>password;
    int ans=minimum(n,password);
    cout<<ans;

}
