#include<stdio.h>
#include<math.h>

struct VNIDOL
{
float diemgiamkhao;
float sum5;
float sum3;
}
K[50];


void getJudgeData(int n)
{   
    float sum5=0;
    int min,max,i,j;
    float diemgiamkhao;
	for(i=1;i<n+1;i++)
	{   
        printf("Enter point of singer %d:\n",i);
        
        max=K[0].diemgiamkhao;
       
		for(j=1;j<=5;j++)
		{
			printf("Enter judge %d point :\n",j);
			scanf("%f",&K[j].diemgiamkhao);
		    
			if(K[j].diemgiamkhao<0)
			break;
			if(K[j].diemgiamkhao>10)
		    break;
	        
        	max=max > K[j].diemgiamkhao? max: K[j].diemgiamkhao;
        	
   	    	min=min < K[j].diemgiamkhao? min: K[j].diemgiamkhao;
        	
    		
		    K[i].sum5+=K[j].diemgiamkhao;
		    K[i].sum3= K[i].sum5-max-min;
		}
		
	}	
}
void CalcScore(int n)
{   
     int i;
     float sum3;
	for(i=1;i<n+1;i++)
	{
	
		printf("This is a point table of this game show :\n");
		printf("|singer number| average point |\n");
		printf("|     %d      |     %.2f     |",i,K[i].sum3*0.333);
	}
}

int main()
{
  
   int n;
  
   printf("Please enter number of Singer in this gameshow :");
   scanf("%d",&n);
   getJudgeData(n);
   CalcScore(n);
   return 0;
}
