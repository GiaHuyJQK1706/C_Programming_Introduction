#include <stdio.h>
int main()
{
   int k,i;
   int x[k],y;
   int* ptr;
   printf("Nhap so phan tu cua mang x :");
   scanf("%d",&k);
   for(i=0;i<k;i++)
   {
   	  printf("Enter x[%d]= ",i+1);
   	  scanf("%d",&x[i]);
   }
   
    for(i=0;i<k;i++)
   {
   	  ptr=&x[i];
   	  *ptr += 100;
   	  printf("x[%d]=%d\n",i+1, *ptr);
   	  
   }
   return 0;
}
