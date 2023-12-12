#include<stdio.h>

int main()
{
	int i,k,min,j;
	int h[100];
	int sum=0;
	printf("Nhap so chu so mong muon:\n");
	scanf("%d",&k);

	for(i=0;i<k;i++)
	{
		printf("Nhap so thu %d\n",i+1);
		scanf("%d",&h[i]);
		if(h[i]%2!=0)
		{
			sum+=h[i];
		}
	
	}
	min=h[0];
	for(i=0;i<k;i++)
	{
		if(h[i]<min)
		{
			min=h[i];
		}
	}
	printf("Tong cac so le la %d\n",sum);
	printf("SO nho nhat cua day so la %d",min);
	return 0;
}
