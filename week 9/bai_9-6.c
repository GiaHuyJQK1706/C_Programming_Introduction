#include<stdio.h>

void printchar(char ch,int n)
{
	int i;
	int j;
   
	for(i=0;i<=n;i++)
	{ 
	  
	  for(j=1;j<=i;j++)
	      {
  		      printf("%c",ch);
  	      }
  	  printf("\n");      
	}	
}
int main()
{
   int n;
   char ch='*';
   printf("Please enter n u want :");
	scanf("%d",&n);
	printchar(ch,n);
	return 0;
}
