TARGET = my_mastermind
OBJ = my_mastermind.o
SRC = my_mastermind.c
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c11

CC = gcc


all: my_mastermind

my_mastermind: my_mastermind.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f my_mastermind

fclean: clean

re: fclean all
