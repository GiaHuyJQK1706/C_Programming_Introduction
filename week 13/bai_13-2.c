#include<stdio.h>
#include<string.h>

void replace(char*nhap, char kitu1, char kitu2)
{
	int i; 
    for(i=0;i<strlen(nhap);i++)
    {
    	if(*(nhap+i)==kitu1)
    	*(nhap+i)=kitu2;
	}
    return;
}


 int main ()
 {
 	char nhap[80];
 	char kitu1,kitu2;
 	printf("Nhap xau ki tu mong muon   : ");
    gets(nhap);
    printf("Nhap ki tu muon tim va ki tu muon thay doi  :");
    scanf("%c %c",&kitu1,&kitu2);
    replace(nhap,kitu1,kitu2);
    printf("Xau vua thay doi la : %s",nhap);
 	return 0;
 }
