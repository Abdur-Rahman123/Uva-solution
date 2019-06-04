#include<iostream>
using namespace std;
int issubstring(string str1,string str2)
{
    int len1=str1.length();
    int len2=str2.length();
    for(int i=0;i<=len2-len1;i++)
    {
        int j;
        for( j=0;j<len2;j++)
        {
            if(str2[i+j]!=str1[j])
                break;

        }
        if(j==len1)
                    return i;

    }
    return -1;
}
int main()
{
    string s1="for";
    string s2="geekforgeeker";
    int res=issubstring(s1,s2);
    if(res==-1)
    cout<<"not present"<<endl;
    else
        cout<<"found at"<<res<<endl;
}
