#include<stdio.h>
int K[100];
int Nhap(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter K[%d]:  ",i+1);
		scanf("%d",&K[i]);
	}
}
int demso0(int n)
{
	int i,dem=0;
	for(i=0;i<n;i++)
	{
		if(K[i]==0)
		{
			dem++;
		}
	}
	return dem;
}
int demphantu(int n)
{
	int i,j;
	int demso[n],phanchia[n];
	for(i=0;i<n;i++)
	{
		demso[i]=1;
	
		for(j=i+1;j<=n;j++)
		{
			if(K[i]==K[j])
			{
			    K[j]=0;
				demso[i]++;
			}
		}
		if(K[i]!=0)
		{
		printf("So %d xuat hien %d lan\n",K[i],demso[i]);
	    }
	}
}
int main()
{
	int n;
	printf("Enter numbers of array u want :\n");
	scanf("%d",&n);
	
	Nhap(n);
	printf("So phan tu bang 0 cua day la : %d\n",demso0(n));
	demphantu(n);
	return 0;
}
