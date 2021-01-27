#include <stdio.h>
#include<iostream>
#include<math.h>
bool sqr(long double n)
{
long double sr=sqrt(n);
    return(sr-floor(sr)==0);
}
int main()
{
   long double n;
        std::cin>>n;
     
        if(sqr(n))
        {
            std::cout<<n<<"  is complete square root"; 
        }
        else {
            
            std::cout<<n<<"  is not complete square root";
        }

    return 0;
}
#include <stdio.h>
#include<iostream>
#include<math.h>
bool sqr(long double n)
{
long double sr=sqrt(n);
    return(sr-floor(sr)==0);
}
int main()
{
   long double n;
        std::cin>>n;
     
        if(sqr(n))
        {
            std::cout<<n<<"  is complete square root"; 
        }
        else {
            
            std::cout<<n<<"  is not complete square root";
        }

    return 0;
}