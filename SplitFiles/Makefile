TARGET = makeart
CFLAGS = -Wall -g -Wextra
CC = gcc

$(TARGET): parse.o main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o parse.o

main.o: main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

parse.o: parse.c
	$(CC) $(CFLAGS) -c -o parse.o parse.c

clean: 
	rm *.o $(TARGET) 

remake: clean $(TARGET)