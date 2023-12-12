#include<stdio.h>
int x;
int K[];

int ReverseTheArray(int x)
{
	
		int i;
	printf("This is a reverse array:\n");
		for(i=0;i<x;i++)
	{	
		printf("x%d=%d\n",i+1,K[x-1-i]);
		
	}
}
int main()
{   
int x,i=0;
   
   printf("Enter number of elements u want in your array:\n");
   scanf("%d",&x);
   do
   {
   	printf("Enter x%d:\n",i+1);
   	scanf("%d",&K[i]);
   	i++;
   }
   while(x>0&&i<x);	
   K[x]=ReverseTheArray(x);
    return 0;
}