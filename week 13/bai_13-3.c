#include<stdio.h>
#include<string.h>
void kiemtra(char *s){
    int a;
    int i;
    if (strlen(s)==8){
    for(i=0;i<3;i++)
        if(*(s+i)>'0'&&*(s+i)<'9') {a=0;printf("khong hop le\n");break;}
        else  for( i=3;i<7;i++)
            if(*(s+i)<'0'&&*(s+i)>'9'){a=0;printf("khong hop le\n");break;}
            else a=1;
    if(a==1)
    printf("hop le\n");}
    else printf("khong hop le\n");
    return;
}
int main(){
    char s[100];
    printf("Nhap so hieu khach hang ");fgets(s,100,stdin);
    kiemtra(s);
    return 0;
}
