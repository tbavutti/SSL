  
SOURCE = Calc.c Scanner.c Parser.c TablaDeSimbolos.c
BIN = Calc.exe
OBJ = Calc.o Scanner.o Parser.o TablaDeSimbolos.o
FLEXL = scanner.l
FLEXC = lex.yy.c
CC = gcc
CFLAGS = -std=c18 -g
RM = rm -f

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

run: 

$(OBJ): $(SOURCE)
	$(CC) -c $(SOURCE) $(CFLAGS)

.PHONY: clean
clean:
	$(RM) $(OBJ) $(BIN)

all: clean $(BIN) run
