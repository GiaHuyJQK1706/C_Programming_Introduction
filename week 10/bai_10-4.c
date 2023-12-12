#include<stdio.h>
#include<math.h>
int x;
int K[];

int BigtoSmall(int x)
{
    int M[x];
     int i,j;
	for(i=0;i<x;i++)
	{	
	    M[i]=K[i];
	}
	for(i=0;i>-1;i++)
	{
	int a;
	a=1;	
	for(i=0;i<x;i++)
	{
	    if(M[i]<M[i+1])
	    {
	    	M[i]=M[i+1]+M[i];
	    	M[i+1]=M[i]-M[i+1];
	    	M[i]=M[i]-M[i+1];
	    	a=0;
		}
	}
	if(a==1){
		break;
	}
	}
	for(i=0;i<x;i++)
	{
		printf("%5d",M[i]);
	}
	printf("\nSap xep giam dan cac so le trong mang la :\n");
	for(i=0;i<x;i++)
	{   if(abs(M[i])%2==1)
	{
		printf("%5d",M[i]);
	}
	}
}
int main()
{   
int i=0;
   
   printf("Enter number of elements u want in your array:\n");
   scanf("%d",&x);
   do
   {
   	printf("Enter x%d:\n",i+1);
   	scanf("%d",&K[i]);
   	i++;
   }
   while(x>0&&i<x);	
   K[x]=BigtoSmall(x);
    return 0;
}
