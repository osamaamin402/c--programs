#include<bits/stdc++.h>
//#include<math.h>
using namespace std;
int isPrime(int no)
{
	no = abs(no);
	for(int i=2;i<no;i++)
	{
		if(no%i==0)
		{
			return 0;
		}
	}
	return 1;
}
main()
{
	int sum=0,n=0,ub=0,lb=0;
	cout<<"Range : ";
	cin>>lb>>ub;
	for(int i=lb;i<=ub;i++)
	{
		n=isPrime(i);
	
		if(n>0)
		{
			 sum=sum+i;
			
		}
	}
	
	cout<<sum;
}

