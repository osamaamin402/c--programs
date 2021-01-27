#include<bits/stdc++.h>
using namespace std;
class BubbleSort
{
	public:
	int n;
	void get()
	{
		cin>>n;
		int arry[n];
		for(int i=0;i<n;i++)
		{
			cin>>arry[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(arry[j]>arry[j+1])
				{
					int temp=arry[j+1];
					arry[j+1]=arry[j];
					arry[j]=temp;
				}
			}
		}
		
		for(int i=0;i<n;i++)
		{
			cout<<arry[i];
		}
	}
	
};
main()
{
	BubbleSort bs;
	bs.get();
}
