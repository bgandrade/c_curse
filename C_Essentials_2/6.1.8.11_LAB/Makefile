CC := gcc
CFLAGS := -Wall -Wextra -std=c11
SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)
TARGET := triangles

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)
