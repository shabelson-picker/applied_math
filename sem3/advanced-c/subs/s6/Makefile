CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g

SRC = list3d.c
OBJ = $(SRC:.c=.o)
TARGET = class_work2


all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# class_work1.c does #include "utils.c", so rebuild when utils.c changes
list3d.c: list3d.c

clean:
	rm -f $(OBJ) $(TARGET)