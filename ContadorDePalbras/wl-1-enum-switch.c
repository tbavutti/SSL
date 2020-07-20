#include<stdio.h>

typedef enum States{IN, OUT} State;

int main(){

int c;

State s = OUT;

 while ((c = getchar()) != EOF) {
 	switch(c){
 		case '\n':
 		case '\t':
 		case ' ':
		
		 {
		 	switch(s){
		 		case IN:
		 			s = OUT;
		 			putchar('\n');
		 			break;
		 				
		 		}
		default:
			switch(s){
	        
	                case IN:
	        	        s = IN;
		 		putchar(c);
		 		break;
		 	case OUT:
		 		s = IN;
		 		putchar(c);
		 		break;
		 		
		 		
		}
	 }	
 }
 	
 } 
 
return 0;

};
