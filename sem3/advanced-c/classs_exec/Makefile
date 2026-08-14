CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC = str.c
OBJ = $(SRC:.c=.o)
TARGET = exec

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# class_work1.c does #include "utils.c", so rebuild when utils.c changes
str.o: str.c

clean:
	rm -f $(OBJ) $(TARGET)

# Post-link: generate a human-readable disassembly+source listing
exec.lst: $(TARGET)
	@echo "Generating post-link readable listing $@"
	objdump -dS $(TARGET) > $@

.PHONY: postlink
postlink: exec.lst
