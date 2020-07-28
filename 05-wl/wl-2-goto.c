  
#include<stdio.h>

int main(){

int c;

Out:
	
	while ((c = getchar()) != EOF) {
 	switch(c){
 		case '\n':
 		case '\t':
 		case ' ':
 		putchar('\n');
 		goto Out;
 		default: goto In;
 	}
 		
In:
	putchar(c);
	goto Out;


return 0;

}
};
