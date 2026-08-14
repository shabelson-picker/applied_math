CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g -MMD -MP

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
TARGET = main



all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ) $(TARGET) $(wildcard *.d)

-include $(OBJ:.o=.d)

