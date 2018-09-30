#include<iostream>
using namespace std;
int main()
{
	int num[100],n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>num[i];
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
		if(num[j]>num[i])
		{
			num[i]=num[i]+num[j];
			num[j]=num[j]-num[i];
			num[i]=num[j]-num[i];
		}
		for(i=0;i<n;i++)
			cout<<num[i];
}