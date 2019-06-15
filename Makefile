.PHONY:all clean
CC=gcc
CFLAGS=-Wall -Werror
SD=src/
OD=build/
OTD=build/test/
A=test/
EXECUTABLE=bin/main.exe
EXECUTABLE_2=bin/test_calculator
all: $(EXECUTABLE)
	
$(EXECUTABLE): $(OD)main.o $(OD)functions.o 
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)main.o $(OD)functions.o -lm
$(OD)main.o: $(SD)main.c
	$(CC) $(CFLAGS) -c -o $(OD)main.o $(SD)main.c -lm
$(OD)functions.o: $(SD)functions.c
	$(CC) $(CFLAGS) -c -o $(OD)functions.o $(SD)functions.c -lm
test:$(EXECUTABLE_2)

$(EXECUTABLE_2):$(OTD)main.o $(OTD)functions.o
	$(CC) $(CFLAGS) -o $(EXECUTABLE_2) $(OTD)main.o $(OTD)functions.o -lm
$(OTD)main.o: $(A)main.c
	$(CC) $(CFLAGS) -I thirdparty -I src -c $(A)main.c -o $(OTD)main.o  -lm
$(OTD)functions.o: $(SD)functions.c $(SD)functions.h
	$(CC) $(CFLAGS) -I thirdparty -I src -c $(SD)functions.c -o $(OTD)functions.o  -lm
clean:
	rm -rf $(OD)*.o $(EXECUTABLE) $(EXECUTABLE_2)
