TARGET = MakeArt
CFLAGS = -Wall -Wextra -g
CC = gcc

$(TARGET): parse.c main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.o parse.o

main.o: main.c
	$(CC) $(CFLAGS) -c -o main.o main.c

parse.o: parse.c
	$(CC) $(CFLAGS) -c -o parse.c parse.o

clean: 
	rm *.o $(TARGET) 

remake: clean MakeArt