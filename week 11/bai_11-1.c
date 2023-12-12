#include <stdio.h>
int main(){
int x[3];
int i;
int* ptr;
printf("Nhap x,y,z:\n");
for(i=0;i<=2;i++)
{
	scanf("%d", &x[i]);
}

printf("\n3 so vua nhap la:\n");
for(i=0;i<=2;i++)
{
	ptr = &x[i];
printf("x[%d] = %d\n",i+1, *ptr);
}
return 0;
}
