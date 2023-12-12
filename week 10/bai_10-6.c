#include<stdio.h>

#define SIZE 3

int main()
{   
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int C[SIZE][SIZE];
  

    int i,j,k;
    for(i=0;i<=2;i++)
    {
    	for(j=0;j<=2;j++)
    	{
    		printf("Please Enter a number in line %d, column %d of Matrix A\n",i+1,j+1);
    		scanf("%d",&A[i][j]);
		}
	}
    for(i=0;i<=2;i++)
    {
    	for(j=0;j<=2;j++)
    	{
    		printf("Please Enter a number in line %d, column %d of Matrix B\n",i+1,j+1);
    		scanf("%d",&B[i][j]);
		}
	}
	
for(i=0;i<=2;i++)
    {
    	printf("\n");
    	for(j=0;j<=2;j++)
    	{
    		printf("|%d\|",A[i][j]);	
		}
	
	}
    printf("\n*");
for(i=0;i<=2;i++)
    {
    	printf("\n");
    	for(j=0;j<=2;j++)
    	{
    		printf("|%d\|",B[i][j]);	
		}
	}
	

	printf("\n=");
	
for(i=0;i<3;i++)  
{  
for(j=0;j<3;j++)  
{  
C[i][j]=0;
for(k=0;k<3;k++)  
{  
C[i][j]+=A[i][k]*B[k][j];  
}  
}  
}  
    for(i=0;i<=2;i++)
    {
    	printf("\n");
    	for(k=0;k<=2;k++)
    	{
    		printf("|%d|",C[i][k]);	
		}
	}
	
	
    return 0;
}
