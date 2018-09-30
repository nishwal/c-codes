#include<iostream>
using namespace std;
int main()
{
	int org, n1,n2,i,sum=0,digit;
	cin>>n1;
	cin>>n2;
	for(i=n1+1;i<n2;i++)
	{  
		org=i;
		while(i<n2)
		{
			digit=i%10;
			sum=sum+digit*digit*digit;
			i=i/10;
		}
		if(sum==i)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}