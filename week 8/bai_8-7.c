#include<stdio.h>
#include<math.h>

int main()
{
	int i=1;
	int x=1,n;
	printf("Enter n\n");
	scanf("%d",&n);
	if(n<=0)
	printf("Error 404!\n");
	else
{
    do
    {
    x*=i;
	i++;
    }
    while(i<=n);
   	printf("n!=%d\n",x);
}
   	return 0;
}
