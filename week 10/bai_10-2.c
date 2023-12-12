#include<stdio.h>

int main()
{
	int i,sum=0;
	int k,j;
    int  max;
	int h[k];
	printf("Nhap so phan tu cua mang ban mong muon :\n");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("Nhap so thu %d trong mang\n",i+1);
		scanf("%d",&h[i]);
	}
	
    
	for(i=1;i<k-1;i++)
	{
	j=0;
	if(h[i]>h[i-1]&&h[i]>h[i+1])
	{
	sum+=h[i];
	}
    }
    printf("Tong maxcuco=%d",sum);

	return 0;
}
