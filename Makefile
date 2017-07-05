NAME = test_lib
CC = gcc
SRC = src/mystrlen.c src/myputchar.c src/mystrcmp.c src/mystrnew.c src/mystrdup.c tests/main.c
all:
	$(CC) $(SRC) -o $(NAME)
test: all
	./$(NAME)
