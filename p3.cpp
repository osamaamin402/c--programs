/*#include<iostream>
int main()
{
  int marks;
  std::cin>>marks;
  if(marks>90)
    std::cout<<"You have got A1 grade.";
  else
  {
    if(marks>80&&marks<90)
      std::cout<<"You have got A2 grade.";
    else
    {
      if(marks>70&&marks<80)
        std::cout<<"You have got B1 grade.";
      else
      {
        if(marks>60&&marks<70)
          std::cout<<"You have got B2 grade.";
        else
          std::cout<<"Sorry, you have to re-appear for the test";
      }
    }
  }
}*/

/*
#include<iostream>
int main(){
  int score[4];
  std::cout<<score[2];
  return 0;
}*/

/*
#include <iostream>
int main(){
  int score[4] = {1, 2};
  std::cout<<score[3];
  return 0;
}*/
/*

#include<iostream>
int main() 
{ 
    int arr[2] = {6, 7}; 
    std::cout<<arr[3]<<" ";
    return 0; 
}*/


/*

#include<iostream>
int main() 
{ 
  int arr[2] = {10, 20, 30, 40, 50}; 
  std::cout<<arr[0];
  return 0; 
}*/



/*
#include <iostream>
int main(){
  int arr[3];
  arr[0] = 5;
  arr[1] = 4;
  arr[2] = 8;
  for(int i = 0; i < 3; i++){
    std::cout<<arr[i]<<" ";
  }
}*/

/*#include<iostream>
using namespace std;
int main ()
{
    int  n, i, max, min;
    
    cin >> n;
    int arr[n];
    
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << max;
  
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
  int count, i, arr[30], num, first, last, middle; 
        cin>>count;

  for (i=0; i<count; i++)
  {
                cin>>arr[i];
  }
        cin>>num;
  first = 0;
  last = count-1;
  middle = (first+last)/2;
  while (first <= last)
  {
     if(arr[middle] < num)
     {
    first = middle + 1;

     }
     else if(arr[middle] == num)
     {
    cout<<"She passed her exam "<<"\n"; 
                break; 
           } 
           else { 
                last = middle - 1; 
           } 
           middle = (first + last)/2; 
        } 
        if(first > last)
  {
     cout<<num<<"She failed";
  }
  return 0;
}*/


/*
#include<iostream>
int main()
{
  int a[3][3] = {{1, 3, 4}, {5, 6, 7}, {8, 9}};
  int i = 0, j = 0;
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      std::cout<<a[i][j]<<" ";
    }
    std::cout<<"\n";
  }
}*/
/*
#include<iostream>
int main()
{
  int a[2][] = {1, 2, 3, 4, 5};
  int i, j;
  for (i = 0; i < 2; i++){
    for (j = 0; j < 3; j++){
      std::cout<<a[i][j]<<" ";
    }
    std::cout<<"\n";
  }
  return 0;
}*/
/*
#include <iostream>
using namespace std;

int main()
{
    int r, c, sum[100][100], i, j,r2,c2;

    cin >> r;

    cin >> c;

  
    int a[r][c];

    int b[r][c];
    

    // Storing elements of first matrix entered by user.
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           
           cin >> a[i][j];
       }

    // Storing elements of second matrix entered by user.
    
    
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
    
           cin >> b[i][j];
       }

    // Adding Two matrices
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix.
  
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}*/
/*
#include <iostream>
using namespace std;

int main()
{
    int  trans[10][10], r, c, i, j;

    
    cin >> r >> c;
    int a[r][c];



    for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
      
        cin >> a[i][j];
    }
   

  
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            trans[j][i]=a[i][j];
        }

  
    for(i = 0; i < c; ++i)
        for(j = 0; j < r; ++j)
        {
            cout << " " << trans[i][j];
            if(j == r - 1)
                cout << endl;
        }

    return 0;
}*/

/*
#include <iostream>
int main() {
  int arr[] = {6, 7, 8, 4, 10};
  int *ptr = arr;
  std::cout<<ptr<<" "<<&arr[0];
}*/

/*
#include <iostream>
int main(){
    int arr[4] = {16, 37, 48, 87};
    int *ptr;
    ptr = arr;
    for(int i = 0; i < 4; i = i + 2){
        std::cout<<*(ptr+i)<<" ";
    }
    return 0;
}*/

/*#include <iostream>
int main()
{
  int (*ptr)[10];
  int a[10] = {9, 11, 22, 33, 44, 55, 66, 77, 88, 99};
  ptr = &a;
  std::cout<<(*ptr)[1];
}*/
/*
#include <iostream>
int main() 
{ 
  char arr[] = {13, 25, 36, 47, 29}; 
  char *p = arr; 
  char (*ptr)[5] = &arr; 
    std::cout<<sizeof(p)<<" "<<sizeof(*p)<<"\n"; 
  std::cout<<sizeof(ptr)<<" "<<sizeof(*ptr); 
  return 0; 
} */
/*#include <iostream>
int main() 
{ 
  int arr[3][4] = {
           {2, 3, 4, 5},
           {6, 7, 8, 9},
           {10, 11, 12, 13}
          };
    int (*ptr)[4]; 
    ptr = arr; 
    std::cout<<**ptr<< " "<<*(*(ptr + 1) + 2)<<" "<<*(*(ptr + 2) + 3)<<"\n"; 
    std::cout<<ptr[0][0]<<" "<<ptr[1][2]<<" "<<ptr[2][3]; 
    return 0; 
}*/

/*
#include <iostream>
int main()
{
  int *ptr[10];
  int a[10] = {99, 11, 22, 33, 44, 55, 66, 77, 88, 19};
  *ptr = a;
  std::cout<<*ptr[0];
}*//*

#include <iostream>
int main()
{
 int *ptr[10];
 int a[10] = {99, 11, 22, 33, 44, 55, 66, 77, 88, 19};
 *ptr = a;
 std::cout<<*ptr[5];
}*/
/*
#include <iostream>
int main()
{
    int *ptr[4];
    int (*p)[5];
    int a[5] = {99, 11, 55, 66, 76};
    *ptr = a;
    p = &a;
    std::cout<<(*p)[3]<<"\n";
    std::cout<<*ptr[3];
}*/
/*#include<iostream>
void display(int a, int b)
{
    std::cout<<a + 10<<"\n";
    std::cout<<b + 20;
}
int main()
{
    int arr[] = {25, 81, 45, 12};
    display(arr[1], arr[2]); 
    return 0;
}*/
/*
#include<iostream>
void display(int *a, int n);
int main()
{
   int arr[] = {25, 81, 45, 12};
   int n = sizeof(arr)/sizeof(arr[0]);
   display(arr, n); 
   return 0;
}
void display(int *a, int n)
{
   for(int i = 1; i < n; i = i + 2)
   {
      std::cout<<a[i]<<" ";
   }
}*/

/*

#include<iostream>
void display(int *a)
{
  int n = sizeof(a)/sizeof(a[0]);
  for(int i = 0; i < n; i++)
  {
    std::cout<<a[i]<<" ";
  }
}
int main()
{
  int arr[] = {55, 34, 41, 32};
  display(arr); 
  return 0;
}*/
/*
#include<iostream>
const int c = 3;
void print(int r, int a[][]) 
{ 
  int i, j; 
  for (i = 0; i < r; i++){
    for (j = 0; j < c; j++) 
      std::cout<<a[i][j]<<" ";
    std::cout<<"\n";
  }
}
int main() 
{ 
  int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
  print(3,arr); 
  return 0; 
} */

/*#include<iostream> 
int* fun(int *x, int *y) 
{ 
  if(*x == *y)
    return x;
  else
    return y;
} 
int main() 
{
  int n1 = 34, n2 = 78;
  int *p = fun(&n1, &n2); 
  std::cout<<*p;
  return 0; 
}*/
#include<iostream> 
#include<cstdlib>
int main() 
{ 
  int *p = (int *)malloc(4*sizeof(int));
  free(p);
  return 0; 
} 