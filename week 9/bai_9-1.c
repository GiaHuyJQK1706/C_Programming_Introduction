#include<stdio.h>
#include<math.h>

int Tinhtoan(float m,float v)
{
	float ke;
    ke=0.5*m*pow(v,2);
	printf("The value of KE is %g\n",ke);
}
int main()
{
	
	float m;
	float v;
	
	printf("Enter m:\n");
	scanf("%f",&m);
    printf("Enter v:\n");
    scanf("%f",&v);
	Tinhtoan(m,v);
	return 0;
}
