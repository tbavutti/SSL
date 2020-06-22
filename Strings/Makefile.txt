bin/programa:obj/String.o obj/StringTest.o 
	gcc obj/String.o obj/StringTest.o -o bin/programa

obj/String.o:
	gcc -c -Iinclude Strings/ String.c -o obj/String.o 

obj/StringTest.o:
	gcc -c -Iinclude Strings/ StringTest.c -o obj/StringTest.o 
