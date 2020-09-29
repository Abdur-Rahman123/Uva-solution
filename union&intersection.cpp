#include<bits/stdc++.h>
using namespace std;
vector<int>unione(vector<int>v1,vector<int>v2)
{

    for(int i=0;i<v2.size();i++)
    {
        v1.push_back(v2[i]);
    }
    sort(v1.begin(),v1.end());
    for(auto it=v1.begin()+1;it!=v1.end();++it)
    {
        if(*it!=*(it-1))
        {
           v1.erase(it);
           it--;
        }
    }

        return v1;
}
int main()
{
   vector<int> v1={1, 3, 4, 5, 7};
   vector<int> v2={2, 3, 5, 6};
   vector<int>result=unione(v1,v2);
   for(int i=0;i<result.size();i++)
   {
       cout<<result[i]<<" ";
   }

}
