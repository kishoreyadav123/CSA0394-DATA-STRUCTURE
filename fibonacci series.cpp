#include <stdio.h>
#include <stdlib.h>
 
int main()  
{   
int n1=0,n2=1,n3,i,number;   
printf("Enter the number of elements to be printed in Fibonacci series:");   
scanf("%d",&number);   
printf("\n%d %d",n1,n2);//printing 0 and 1  
   
for(i=2;i<number;++i)//Starts from 2 to given number-1
{  
  n3=n1+n2;  
  printf(" %d",n3);  
  n1=n2;  
  n2=n3;   
}  
return 0; 
} 
