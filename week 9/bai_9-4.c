#include<stdio.h>
#include<math.h>

int main()
{
   float time,salary;
   printf("Please enter your working time this weeek :\n");
   scanf("%f",&time);
   if(time<=65&time>=10)
   {
   	 if(time>=40)
   	 {
 	   salary=15000*40+15000*1.5*(time-40);
	   printf("This week u can claim %.f VND, good job!\n",salary);		
     }
   	 else printf("This week u can claim %.f VND, u have to work more next week!\n",salary=15000*time);
   }
   else printf("Invalid entered time, don't joke me bro !\n");
   return 0;
}
