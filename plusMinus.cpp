#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double positive=0.0,negative=0.0,zero=0.0;
    double divPositive,divNegative,divZero;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            positive+=1;
        }
        if(arr[i]==0)
        {
            zero+=1;
        }
        if(arr[i]<0)
        {
          negative+=1;
        }
    }
    divPositive=positive/n;
    divNegative=negative/n;
    divZero=zero/n;
    std::cout << std::setprecision(6) << std::fixed;
    cout<<divPositive<<endl;
    cout<<divNegative<<endl;
    cout<<divZero<<endl;
}
