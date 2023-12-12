#include<stdio.h>
int main(){
	char c;
	while(c = getchar()){
		switch(c){
			case '\b': {
				putchar('\\');
				putchar('b');
				break;
			}
			case '\t': {
				putchar('\\');
				putchar('t');
				break;
			}
			case 92: {
				putchar('\\');
				break;
			}
			default:
				putchar(c);
		}
	}
	return 0;
}
