#include<stdio.h>

int Sosanh()
{
	int k[1];
	int i;
    for(i=0;i<=1;i++)
   {
    printf("Enter a number u want\n");
    scanf("%d",&k[i]);  
   }
    printf("0 or 1 ?\n");
	if(k[1]=k[0])
	printf("1");
	else printf("0");
}
int Sosanh2mang(int x)
{
	int sum=0;
	int a[x];
	int b[x];
	int i;
    for(i=0;i<x;i++)
   {
    printf("Enter numbers of array a\n");
    scanf("%d",&a[i]);  
   }
    for(i=0;i<x;i++)
   {
    printf("Enter numbers of array b\n");
    scanf("%d",&b[i]);  
   }
    for(i=0;i<x;i++)
   {
    if(a[i]==b[i])
    {
    	sum++;
	}
   }
   if(sum==x)
	{
		printf("Array a = Array b\n");
	}
	else printf("Array a != Array b\n");
}
int main()
{   
int x;
    printf("Enter the numbers of element in each array\n");
    scanf("%d",&x);
     Sosanh();
     Sosanh2mang(x);
    return 0;
}
