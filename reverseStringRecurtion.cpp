#include<bits/stdc++.h>
using namespace std;
string revers(string &s,int k)
{
    static int i=0;
    if(k==s.size())
        return " " ;
    revers(s,k+1);
    if(i<=k)
    swap(s[i++],s[k]);
    return s;
}
int main()
{
    string s="Rahman";
    string k=revers(s,0);
    cout<<k;
    return 0;
}

