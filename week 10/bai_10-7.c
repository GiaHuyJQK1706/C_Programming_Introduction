#include<stdio.h>
int x;
int K[];

int CheckTheArray(int x)
{
	int i;
    int j=0;
    if(x%2!=0)
    {
	for(i=0;i<x*0.5+1;i++)
	{	
		if(K[i]!=K[x-1-i])
		{
		printf("Mang ko doi xung !");
		j++;
  	    break;
	    }
	}
    }
    else
    for(i=0;i<x*0.5;i++)
	{	
		if(K[i]!=K[x-1-i])
		{
		printf("Mang ko doi xung !");
		j++;
  		break;
	    }
	}
	if(j==0)
	{
		printf("Mang doi xung !\n");
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
   K[x]=CheckTheArray(x);
    return 0;
}
