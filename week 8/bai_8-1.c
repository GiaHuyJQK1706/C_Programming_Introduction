#include<stdio.h>
int main ()
{
   char c;
   int khoangcach=0;

   printf("Nhap chuoi ki tu: ");

   while(( c = getchar())!='.')
{
	if(c==' ')
	{
		if (khoangcach==0)
		{

	    khoangcach=1;
		putchar(c);
		}
	}
	if(c!=' ')
	{
		khoangcach=0;
		putchar(c);
	}

}
return 0;
}
