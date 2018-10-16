CFLAGS = -Wall
OBJS = func1.o main.o
TARGET = main
CC = gcc

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm 
