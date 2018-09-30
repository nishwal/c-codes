#include<iostream>
using namespace std;
bool valid(char c)
{
	if( tolower(c)>='a' && tolower(c)<='z') return 1;
	if(c>='0' && c<='9') return 1;
return 0;
}
bool check( string s){
	int i,j;
	int n=s.size();
	i=0,j=n-1;
	while(i<j){
		if(s[i]!=s[j])return 0;
		i++;
		j--;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		string res;
		getline(cin,s);
		for(int i=0;i<s.size();i++)
		{
			if(valid(s[i]))
			{
				res+=s[i];
		}
		}
		cout<<(check(res) ? "yes":"no");
	}
return 0;
	}