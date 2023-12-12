#include<stdio.h>

int Celcius(int n)
{
	int i;
	float j;
    float k=0.5555;
	for(i=0;i<=n;i++)
	{   
		j=k*(i-32);
		
		printf("|    [%d]     |     [%.2f]     |\n",i,j);
	}	
}
int main()
{
   int n;
   printf("Please enter an interger number of Fahrenheit Degree :");
	scanf("%d",&n);
	
	printf("This is a table of F and C Degree :\n");
	Celcius(n);
	return 0;
}
