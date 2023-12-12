#include<stdio.h>
#include<math.h>

int TLP(int n)
{
	int i=1;
	int a=1;

    if(n>1)
    {
	do
	{
	    a+=pow(i,3);
	    i++;
	}
	while(i<=n);
    printf("Tong lap phuong cua cac so tu 1 den %d la %d\n",n,a);
    }
    else printf("Error!!");
}
int USO(int n)
{   
    int j=1,q;   
    printf("Uoc so cua n la :\n");
    for(j=1;j<=n;j++)
		{
            q=n%j;
			if(q==0)
			{
		    printf("%d\n",j);
			}
			else printf("");
		}
}
int BP(int n)
{   
int i=1;
    if(n>1)
    {
	printf("Binh phuong cac so tu 1 den %d la :\n",n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i*i);
	}
    }
    else printf("Error!");
}
int main()
{
   int j,q,n;
   int i=1;
   int a=1;
  
    printf("Enter n u want\n");
    scanf("%d",&n);

   TLP(n);
   USO(n);
   BP(n);
   return 0;
}
