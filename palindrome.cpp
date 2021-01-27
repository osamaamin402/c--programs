#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
        cin>>n;
        int copy=n;
        while(n!=0)
        {
            int rev=n%10;
            sum=sum*10+rev;
            n=n/10;
        
        }
        if(sum==copy)
        {
            cout<<copy<<"is palindrome"; 
        }

    return 0;
}
