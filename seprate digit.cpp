#include<iostream>
using namespace std;
int main()
{
	int id;
	cin>>id;
	int otp=1;
	while(id!=0)
	{
		int id2=id%10;
		otp=otp*id2;
		id=id/10;
		
	}
	cout<<otp;
}
