#include <stdio.h>
int main()
{
int k;
int x[k];
int i;
int* ptr;
printf("Nhap so phan tu cua mang :\n");
scanf("%d",&k);
for(i=0;i<k;i++)
{
    printf("Enter x[%d]\n",i+1);
    scanf("%d",&x[i]);
}
for(i=0;i<k;i++)
{
	ptr = &x[i];
    printf("dia chi x[%d] = %g\n",i+1, *ptr);
}
return 0;
}
