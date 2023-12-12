#include<stdio.h>
#include<string.h>

 int main ()
 {
 	int dem;
 	int i;
 	char nhap[80];
 	printf("Nhap xau ki tu mong muon :\n");
    gets(nhap);
    dem=0;
    i=0;
    while(nhap[i]!='\0')
	{
	   if(nhap[i]==' ')
	   dem++;
	   i++; 
	}
    printf("So khoang trong trong xau vua nhap la %d\n",dem);
 	return 0;
 }
