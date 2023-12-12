#include<stdio.h>
#include<math.h>
int Is_Prime(int m,int n,int i,int j,int k)
{   
   
	printf("Enter m:\n");
	scanf("%d",&m);
    printf("Enter n:\n");
    scanf("%d",&n);
    if(m>=n)
	{
    printf("Error!!");
	}
    else 
	{
	if( m<2)
	{
		printf("Error!!");
	}
    printf("Prime number from %d to %d are :\n",m,n);
    for(i=m;i<=n;i++)
	{
	int k=0;
		for(j=2;j<=sqrt(n);j++)
		{
			if(i%j==0&i/j>1)
			{
			k++;	
			}
		}
	if(k==0)
	printf("%d\n",i);	
	}
    }
}
int main()
{
	int n,m;
	int i,j;
	int k=1;
    Is_Prime(m,n,i,j,k);
    return 0;
}
