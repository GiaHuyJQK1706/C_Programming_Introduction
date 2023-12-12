#include<stdio.h>
#include<string.h>
void kiemtra(char *s)
{
  int i;
  for(i=0;i<strlen(s);i++)
  {
  	
	  if(s[i]==','||s[i]=='.'||s[i]==':'||s[i]==';'||s[i]=='!'||s[i]=='?')
	  {
	  	s[i]=' ';
	  }
  }
  return;  
}
int main(){
    char s[100];
    printf("Nhap xau ");
	gets(s);
    kiemtra(s);
    printf("%s",s);
    return 0;
}
