#include <stdio.h>
int main(){
int x[7]={13, -355, 235, 47, 67, 943, 1222};
int i;
int* ptr;
for(i=0;i<=4;i++)
{
	ptr = &x[i];
    printf("dia chi x[%d] = %g\n",i+1, *ptr);
}
return 0;
}
