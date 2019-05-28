C = gcc 
CFLAGS = -Wall -Werror
EXECUTABLE = bin/main.exe 
DIR = build/
DAR = src/
DUR = bin/


all: $(EXECUTABLE) 

$(EXECUTABLE): $(DIR)main.o  $(DIR)functions.o
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(DIR)main.o $(DIR)functions.o -lm

$(DIR)main.o: $(DAR)main.c 
	$(CC) $(CFLAGS) -c -o $(DIR)main.o $(DAR)main.c -lm

$(DIR)func.o: $(DAR)functions.c
	$(CC) $(CFLAGS) -c -o $(DIR)functions.o $(DAR)functions.c -lm

.PHONY: clean
clean:
	rm -rf $(DIR)*.o $(DUR) 
