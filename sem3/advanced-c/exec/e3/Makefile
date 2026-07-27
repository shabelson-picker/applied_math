CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC = nested_lists.c
OBJ = $(SRC:.c=.o)
TARGET = nested_lists


all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ) $(TARGET)