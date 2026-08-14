CC = gcc
CFLAGS = -Wall -Wextra -std=c11 

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
TARGET = class_work4



all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ) $(TARGET) $(wildcard *.d)

-include $(OBJ:.o=.d)

