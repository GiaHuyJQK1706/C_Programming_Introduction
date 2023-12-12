#include<stdio.h>
#include<math.h>

int lanamNhuan(int year)
{

	if(year<0)
	printf("Valid number!!");
	else
	{
		if(year%400==0)
		printf("This is a leap year !\n");
		else 
		{
		if(year%4==0&year%100!=0)
		printf("This is a leap year !\n");
		else printf("This is not a leap year !\n");
		}
		
	}
}
int main()
{
   int year;
   	printf("Enter a year u wanna check  :");
	scanf("%d",&year);
    lanamNhuan(year);
    return 0;
}
