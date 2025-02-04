# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Source and object files
SRC = main.c math_operations.c
OBJ = $(SRC:.c=.o)
EXEC = test_program

# Default target to build the executable
all: $(EXEC)

# Rule to link the object files and create the executable
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Rule to compile source files into object files
%.o: %.c math_operations.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove object files and executable
clean:
	rm -f $(OBJ) $(EXEC)

# PHONY targets to avoid conflict with filenames
.PHONY: all clean

