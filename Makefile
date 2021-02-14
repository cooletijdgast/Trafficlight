CC = g++
CFLAGS = -Wall -Wextra -Wconversion -Wpedantic

IDIR = include
SDIR = src

DEPS = $(wildcard *.cpp)

default: $(DEPS)
	$(CC) -o program $^ $(CFLAGS)