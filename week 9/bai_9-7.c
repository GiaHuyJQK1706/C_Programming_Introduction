#include<stdio.h>

void Kiemtradk(int n)
{    int dem=0;
     int dem1=0;
    
	 while(n>0)
	 {
		int a=n%10;
		n=n/10;
		if(a%2==0)dem++;
		else dem1++;
	
	 }
	 if(dem==1) printf("Toan so chan");
	 else if(dem1==1) printf("Toan so le");
	 else printf("Error!\n");
}
int main()
{
	int n;
	printf("Enter n u want\n");
	scanf("%d",&n);
	Kiemtradk(n);
	return 0;
}
