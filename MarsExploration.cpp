//https://www.hackerrank.com/challenges/mars-exploration/problem
//Accepted..
#include<bits/stdc++.h>
using namespace std;
int marsexpose(string input)
{
  int len=input.length();
  string com="SOSSOS";
  int i=0,j=0,k=0;
int clen=com.length();
  for(i=0;i<len;i++)
  {
      if(input[i]!=com[j])
      {
          k++;
      }
      j++;
      if(j==clen)
      {
          j=0;
      }
  }
  return k;
}
int main()
{
    string input;
    cin>>input;
    int res=marsexpose(input);
    cout<<res;
}
