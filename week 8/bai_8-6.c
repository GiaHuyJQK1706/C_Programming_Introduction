#include<stdio.h>
int main()
{
int i,n=0;
float diem,tongdiem=0;
do
{
	printf("Enter your point\n");
	scanf("%g",&diem);
	if(diem>=0.00)
	{
	tongdiem+=diem;
	n++;
	}
	else break;
}
while(diem>=0.00);
printf("Trung binh la %.2g\n",tongdiem/n);
return 0;

}
