#include<iostream>
int main() 
{
  int a = 16, b = 72;
  int const *str = &a;
  *str = b;
  std::cout<<*str;
  int* const s = &b;
  s = &a;
  std::cout<<*s;
  return 0;
}

/*#include<iostream>
int main()
{
  void *p;
  int i =10;
  p = &i;
  std::cout<<*p;
}*/


/*#include<iostream>
int main()
{
   char *p;
   int i = 97;
   p = &i;
   std::cout<<*p;
}*/

/*#include<iostream>
int main()
{
   int a = 10, *p;
   p = &a;
   *p++;
   std::cout<<*p;
}
*/

/*#include<iostream>
int main()
{
   int a = 5, *p;
   p = &a;
   ++*p;
   std::cout<<*p;
}
*/
/*#include<iostream>
int main()
{
  int a = 10,*p;
  int *vp;
  p = &a;
  vp = p;
  std::cout<<*p;
  std::cout<<*vp;
}*/
/*#include<iostream>
int main()
{
  int a = 5, *p;
  p = &a;
  p = p * 1;
  p = p / 1;
  std::cout<<p;
}

*/
/*#include<iostream>  
int main ()  
{  
  int i = 100;  
  int *p = &i;  
  int *temp;  
  temp = p;  
  p = p + 2;  
  std::cout<<temp - p;
}
*/


/*#include <iostream>
int main()
{
  int a = 3;
  int **p = &a;
  std::cout<<**p;
}
*/
/*#include<iostream>
int fun(int x, int *p, int **ptr)
{
   int y, z;
   **ptr += 2; 
   z = **ptr;
   *p += 1;
   y = *p;
   x += 3;
   return x + y + z;
}
int main()
{
   int c, *b, **a;
   c = 4;
   b = &c;
   a = &b; 
   std::cout<<fun(c,b,a);
}*/

/*#include <iostream>
using namespace std;
int main()
{
  int n = 4;
  int *p = &n;
  int **ptr = &&p;
  std::cout<<*p<<" "<<**ptr;
}*/

/*#include <iostream> 
int main() 
{ 
    int a = 32; 
  int *ptr = &a; 
    char ch = 'A'; 
    char &p = ch; 
    p += a; 
    *ptr += ch; 
    std::cout<<a<<" "<<ch; 
    return 0; 
}*/


/*#include<iostream>
int fun(int x,int y)
{
  
if(x == 0){
    return y;
  }
  else{
    return fun(x-1, x+y);
  }
}
int main()
{
  int a=5;
  int b=2;
  std::cout<<fun(a,b);
}*/


/*#include<iostream>
int f(int n) 
{
  if(n == 0)
  {
    return 0;
  }
  int count = 1 + f(n/15);
  return count;
}

int main()
{
  int a=123;
  std::cout<<f(a); 
  
  return 0;
}*/ 

/*
#include<iostream>
void print(int n)
{
    if(n == 0){
      return;
    }
    else{
    std::cout<<n<<" ";
    print(n - 1);
    std::cout<<n<<" ";
    }
}
int main()
{
  print(5);
}*/
/*

#include <iostream>
void fun(int a, int b, int &c)
{
    a = b + c;
    b = a + c;
    c = a + b;
}
int main()
{
    int x = 3, y = 4;
    fun(x, y, y);
    std::cout<< x << " " << y;
    return 0;
}*/
/*#include<iostream>
int main()
{
  int a = 10;
  int& r = a;
  r = 25;
  std::cout<< "a = " << a<<"\n";
  std::cout<< "r = " << r<<"\n";
  a = 20;
  std::cout<< "a = " << a<<"\n";
  std::cout<< "r = " << r;
  return 0;
}*/

/*#include<iostream>
int main()
{
  int x=10;
  switch(x)
  {
    default : std::cout<<"Greater than 3";
    break;
    case 1 : std::cout<<"Choice is 1";
    break;
    case 2 : std::cout<<"Choice is 2";
    break;
    case 3 : std::cout<<"Choice is 3";
    break;
  }
}*/

/*
#include<iostream>
int main()
{
    float x=1.23;
    switch(x)
    {
        case 1.21 : std::cout<<"Technology";
        break;
        case 1.22 : std::cout<<"Logics";
        break;
        case 1.23 : std::cout<<"Coding";
        break;
        default : std::cout<<"C++";
        break;
    }
}*/

/*
#include<iostream>
int main()
{
  int a=1;
  switch(a)
  {
    case 0: std::cout<<"Zero ";
    case 1: std::cout<<"One ";
    case 2: std::cout<<"Two ";
    default: std::cout<<"Default ";
  }
}*/
/*
#include<iostream>
int main(){
 int n = 1;

 switch(n) {
   case 1: 
      std::cout<<"C";
      break;
   case 2: 
      std::cout<<"C++";
      break;
   case 3: 
      std::cout<<"Java";
      break;
   case 3: 
      std::cout<<"Python"; 
      break;
   default: 
      std::cout<<"Invalid Input";
   }
   return 0;
}*/




/*
#include<iostream>
int main()
{
    int x;
    std::cin>>x;
    switch(x)
    {
        case 0:std::cout<<"The number is zero";
        break;
        default:
        int y;
        y=x%2;
        switch(y)
        {
            case 0:std::cout<<"Even number";
            break;
            case 1:std::cout<<"Odd number";
            break;
        }
    }
}*/

/*
#include<iostream>
int main()
{
    int Id,marks;
    if (marks>=0)
    {
    	
    	std::cout<<Id<<" is eligible for reward.";
    }
    else{}
 }*/
/*
#include<iostream>
int main()
{
	int a,b;
	std::cin>>a>>b;
	if (a>b)
	{
		std::cout<<b<<" is smallest number";
	}
	else{
		std::cout<<a<<" is smallest number";
	}
}*/

/*


#include<iostream>
int main(){
  for(int i = 1; i++){
    std::cout<<i;
  }
}*/


/*
#include<iostream>
int main(){
  for(int i = 1; i < 10; i = i + 2){
    std::cout<<i;
  }
}*/



/*
#include<iostream>
int main() 
{
  int n = 5, i;
  for(i = 1; i <= n; i++);
  std::cout<<i;
}*/


/*
#include <iostream>
int main() 
{
  int n = 5;
  while(){
     std::cout<<n;
     n--;
  }
}*/


/*
#include <iostream>
int main()
{
  int i=1, j=1;
  while (i <= 4 || j <= 3)
  {
    std::cout<<i<<" "<<j<<"\n";
    i++;
    j++;
  }
  return 0;
}*/

/*
#include<iostream>
int main() 
{
  int i = 0, x = 0;
  do
  {
    if(i % 5 == 0)
    {
      std::cout<<x;
      x++;
    }
    ++i;
  }while(i <= 5);
  std::cout<<x;
  return 0;
}
*/





/*


#include<iostream> 
int main() 
{ 
  const int i = 2; 
  do
  { 
    std::cout<<++i; 
  }while(i < 1); 
  return 0; 
}*/



/*
#include <iostream>
int main()
{
  int i = 1;
  while (i <= 2)
  {
    int j = 1;
    while (j <= i )
    {
      std::cout<<j<<" ";
      j++;
    }
    std::cout<<"\n";
    i++;
  }
}*/



/*
#include <iostream>
int main()
{
  int i = 1, j;
  do{
    j = 1;
    do{
      std::cout<<j;
      j++;
    }while(j < 3);
    i++;
    std::cout<<"\n";
  }while(i <= 2);
  return 0;
}*/
/*

#include<stdio.h>
int main(){
  int i = 1;
  switch(i){
    case i:  
      printf("Harry");
      break;
    case i + 1:
      printf("Ron");
      break;
    default:
      printf("Hermoine");
      break;
  }
    return 0;
}*/

/*
#include<iostream>
int main() {
  int a = 10;
  do{
      a++;
    if(a > 15)
         break;
  }while(a <= 15);
  std::cout<<a;
  return 0;
}*/
/*
#include <iostream>
int main() 
{ 
  for(int i = 1; i < 3; i++) { 
    for (int j = 1; j <= 2; j++) { 
      if (j >= 2) 
        break; 
      else
        std::cout<<i<<"\n"; 
    } 
  } 
  return 0; 
}*/


/*#include<iostream>
int main(){
  int i = 1;
  do{
    while(i)
      i--;
    for(i++; 0; i++);
    break;
  }while(1);
  std::cout<<i;
  return 0;
}*/

/*
#include <iostream>
int main()
{
  for(int i = 1; i <= 5; ++i)
  {
    if(i == 4 || i == 3)
    {
      continue;
    }
    std::cout<<i<<"\n";
  }  
  return 0; 
}*/


/*
#include<iostream>
int main() {
  for(int i = 1; i <= 5; i++) {
    if (i != 5) 
      continue;
    std::cout<<i;
  }
  std::cout<<'\n';
  for(int j = 1; j <= 2; j++) {
    for(int k = 1; k < 4; k++) {
      if(k != 3) 
        continue;
      std::cout<<k<<" ";
    }
  }
}*/

/*
#include<iostream>
int main()
{
    int i = 0;
    do 
    { 
        if (i++ < 1) 
        { 
            std::cout<<i; 
            continue; 
        } 
    }while(i <= 1);
    return 0; 
}*/
/*

#include<iostream>
int main ()
{
    int x = 4;
    loop: 
      std::cout<<x-1<<" ";
      x--;
      if(x > 0)
      {
          goto loop;
          std::cout<<x<<" ";
      }    
}*/



/*#include <iostream>
int main(){
  int i, count;
  do
  { 
    for(i = 1; i < 5; i++) {
      std::cout<<i<<" ";
      if(i == 1)
      {   
        goto stop;
        std::cout<<"hello";
      }   
    }
    stop:
        count++;
        std::cout<<count<<"\n";
  }while(count < 4);
}*/

/*
#include <iostream>
int main () 
{
  int a = 1;
  LOOP:do {
   if(a == 3){
     a = a + 1;
     goto LOOP;
   }
   std::cout<<a<<" ";
   a++;
  }while(a <= 3);
}*/

/*
#include <iostream>
int main(){
  int i, count;
  do
  { 
    for(i = 1; i < 5; i++) {
      std::cout<<i<<" ";
      if(i == 1)
      {   
        goto stop;
        std::cout<<"hello";
      }   
    }
    stop:
        count++;
        std::cout<<count<<"\n";
  }while(count < 4);
}*/


/*

#include<iostream>
int main(){
  int i = 1;
  while(i < 10)
  {
    std::cout<<i;
  }
}*/

/*
#include <iostream>
int main(){
  for(int i = 0; ;i = (i+1)%2 )
  {
    std::cout<<i<<"\n";
  }
}*/

/*
#include <iostream>
int main(){
  int i;
  for(i=1; i<=10; i++)
  {
    if(i%2 == 0)
    {
      break;
    }
  }
}*/
/*
#include <iostream>
int main(){
  int i = 1;
  do{
    std::cout<<i;
    i++;
  }while(i = 10);
}*/
/*
#include<iostream>
using namespace std;
int main()
{





static int a[ ] = {0,1,2,3,4};
int *p[ ] = {a,a+1,a+2,a+3,a+4};
int **ptr = p;
ptr++;
printf(\n %d %d %d”, ptr-p, *ptr-a, **ptr);
*ptr++;
printf(“\n %d %d %d”, ptr-p, *ptr-a, **ptr);
*++ptr;
printf(“\n %d %d %d”, ptr-p, *ptr-a, **ptr);
++*ptr;
printf(“\n %d %d %d”, ptr-p, *ptr-a, **ptr);






}
*/


/*
#include <iostream>

long factorial (long a);  
int main ()
{
  long number;
  std::cin>>number;
  std::cout<< factorial (number);
  return 0;
}
long factorial (long a)
{long fact;
  for(int i=1;i<=a;i++)
  {
        fact=fact*i;
   }   return fact;
}*/

/*

#include <iostream>
int main()
{
    int *ptr;
    int x=9;
    ptr = &x;
    *ptr = 0;
    std::cout<<" x = "<<x<<"\n";
    std::cout<<" *ptr = "<<*ptr<<"\n";
}*/
/*
#include <iostream>
  int global = 37; 
  void Value(int* x) 
  { 
     x = &global; 
  } 
  int main() 
  { 
     int var = 22; 
     int *Pointer = &var; 
     Value(Pointer); 
     std::cout<< *Pointer << "\n"; 
     return 0; 
  } */


/*#include <iostream> 
int x; 
void Q(int z) 
{ 
    z += x; 
    std::cout<<z<<" ";
} 
void P(int *y) 
{ 
    int x = *y + 3; 
    Q(x); 
    *y = x - 1; 
    std::cout<<x<<" ";
} 
int main() 
{ 
    x = 4; 
    P(&x); 
    std::cout<<x<<" "; 
}*/