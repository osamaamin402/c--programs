#include<bits/stdc++.h>
using namespace std;
main()
{
	string str;
	char arr[20];
	getline(cin,str);
	int n=str.length();
	
	for(int i=0;i<=n;i++)
	{
		if(str[i]>='a' && str[i]<='z' || str[i]>='Z' && str[i]<='Z')
		{
			str[i]=str[i]+2;
			cout<<str[i];
		}
		else{
			cout<<"Its digit";
		}
	}
	for(int i=0;i<n;i++)
		cout<<arr[i];
}
