CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC = class_work1.c
OBJ = $(SRC:.c=.o)
TARGET = class_work1

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# class_work1.c does #include "utils.c", so rebuild when utils.c changes
class_work1.o: class_work1.c utils.c

clean:
	rm -f $(OBJ) $(TARGET)
