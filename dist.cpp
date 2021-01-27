/*#include<iostream>
using namespace std;
class dist
{
public:
	int feet;
	float inch;

	void input()
	{
		cout<<"Enter feet";
		cin>>feet;
		cout<<"Enter inches";
		cin>>inch;
		
	}
	void display()
	{
		
		cout<<"Feet = "<<feet<<endl;
		cout<<"Inches = "<<inch<<endl;
	}
};
int main()
{
	int i,j;
	dist d[5];
	for (i = 0; i < 5; ++i)
	{
		d[i].input();
	}

	for ( j = 0; j < 5; ++j)
	{
		d[i].display();
	}

	return 0;
}*//*
#include <cstring>
#include <iostream>
int main()
{
    char str[] = "This a trial version.";
    char str1[]="George";
    char str2[]="Georgia";
    int len = strlen(str);
    std::cout<<"Length : "<<len<<"\n";
    std::cout<<"Comparison 1 : "<<strcmp(str1,str2)<<"\n";
    std::cout<<"Comparison 2 : "<<strncmp(str1,str2,5)<<"\n";
}*/

/*
#include<iostream> 
#include<string> 
int main() 
{ 
  std::string str; 
  std::getline(std::cin,str); 
  std::cout << "The initial string is : "; 
  std::cout << str << "\n"; 
  str.push_back('s'); 
  std::cout << str << "\n"; 
  str.pop_back(); 
  str.pop_back();
  str.pop_back();
  std::cout << str << "\n"; 
} */

/*
#include<iostream>
#include<string>
 #include<bits/stdc++.h>
using namespace std;
int main() 
{ 
	
	
 

	float x;
	
	cin>>x;
	stringstream ss;
	ss << abs(x-(int)x);
	string s;
	ss >> s;
	cout<<"Floating part is : "<<ss<<endl;
	return 0;
}
*/

#include<iostream>
#include<stdio.h>
 
using namespace std;
 
int main()
{
	char a[100];
	int i,count=1;
	
	gets(a);
	
	for(i=0;a[i]!='\0';++i)
	{
		if(a[i]==' ')
			count++;
	}
	
	if(count>10)
    {  cout<<"Caption not eligible for the contest";
   
    }
    else{ cout << "Caption eligible for the contest";
    }
 
	return 0;
}