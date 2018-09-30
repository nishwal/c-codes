#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i,sum=0,num,digit;
	cout<<"enter numbers bw whom you want armstrong to be displayed";
	cin>>n1>>n2;
	for(i=n1;i<=n2;i++)
	{
		sum=0;
		num=i;
		for(;i>0;num=num/10)
		{
			digit=num%10;
			sum=sum+digit*digit*digit;
		}
		if(sum==i)
		{
			cout<<i;
		}
	}
	return 0;
}
			