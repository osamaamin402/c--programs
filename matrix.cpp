#include<bits/stdc++.h>
using namespace std;
int input(int n);
main()
{
	int n;
	cout<<"Enter Size of matrix : ";
	cin>>n;
	cout<<input(n);
}
int input(int n)
{
	int max=0,sum=0;
	int arr[n][n];
	for(int i=0;i<n;i++)//to get input matrix element
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++)//to print matrix
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	for(int i=0;i<n;i++)//to chack which sum of row is greater
	{
		for(int j=0;j<n;j++)
		{
			sum+=arr[i][j];
		}
		if(max<sum)
		{
			max=sum;
		}
		sum=0;
	}
	return max;
	
	
}
