#include<stdio.h>

void In();
void Out();

void Out(){
	int c;
	while ((c = getchar()) != EOF) {
 	switch(c){
 		case '\n':
 		case '\t':
 		case ' ':
	{
		Out();
		break;
	}
	default:
		putchar(c);
		In();
		}
	}	
}


void In(){
	int c;
	while ((c = getchar()) != EOF) {
 	switch(c){
 		case '\n':
 		case '\t':
 		case ' ':
 			{
 			putchar('\n');
 			Out();
 			break;
			}
			default:
				putchar(c);
				In();
			}
	}
				
}


int main(){

Out();
return 0;

};
