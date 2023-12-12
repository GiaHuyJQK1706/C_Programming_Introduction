#include<stdio.h>
#include<string.h>
int strend(char *s,char *t)
{
  int i;
  int dem=0;
  if(strlen(s)>=strlen(t)) 
  {
  for(i=strlen(t)-1;i>=0;i--)
  {
  	if(t[i]==s[i+(strlen(s)-strlen(t))])
  	dem++;
  
  }
  if(dem==strlen(t))
  return 1;
  else return 0;
  }
  else return 0;
  
}
int main(){
    char s[100];
    char t[100];
    printf("Nhap xau 1 : ");
	gets(s);
	printf("Nhap xau 2 : ");
	gets(t);
    printf("%d",strend(s,t));
    return 0;
}
