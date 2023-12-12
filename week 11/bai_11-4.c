#include <stdio.h>
#include <string.h>
void swap(int*a,int*b,int*c)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=*c;
	*c=tmp;

}
int main()
{
	int x,y,z;
	printf("Enter x,y,z\n");
	scanf("%d %d %d",&x,&y,&z);

	fflush(stdin);
	swap(&x,&y,&z);
	printf("x= %d\ny= %d\nz= %d\n", x, y, z);
	return 0;
}
