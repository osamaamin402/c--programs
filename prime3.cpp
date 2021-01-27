#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Prime2
{
public:
	
	int lb,ub,check;
	int index;
	int arr[5];
	void get()
	{
		index=0;
		cin>>lb>>ub;
		
		for (int i=lb;i<=ub ;i++ ) 
		{
			check=isPrime(i);
			if(check>0)
			{
				arr[index]=i;
				index++;
			}

		}

	}
	int isPrime(int no)
	{
		no=abs(no);
		for (int i=2;i<no ;i++ ) 
		{
			if(no%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
	void display()
	{
		for (int i=0;i<=index-1 ;i++ ) 
		{
			cout<<(arr[i])<<endl;
		}
		cout<<endl;
	}
};

 int main() 
	{
		int n;
		cout<<" enter number \n";
		cin>>n;
		Prime2 pm[n];
		for (int i=0;i<n ;i++ ) 
		{
			pm[i].get();

		}
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			pm[i].display();
		}
	}


