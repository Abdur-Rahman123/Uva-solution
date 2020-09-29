#include <bits/stdc++.h>
using namespace std;

vector<int>intersection(vector<int>v1,vector<int>v2)
{
	vector<int>result;
	int i=0,j=0,size1=v1.size(),size2=v2.size();
	while(i<size1 && j<size2)
	{
		if(v1[i]<v2[j])
		i++;
		else if(v1[i]>v2[j])
		j++;
		else{
		result.push_back(v1[i]);
		i++;
		j++;
		}

	}
	return result;

}
int main() {
	vector<int>v1={1,2,3,4,5,6};
	vector<int>v2={2,3,5,7};
	vector<int>result=intersection(v1,v2);
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i]<<" ";
	}
	return 0;
}
