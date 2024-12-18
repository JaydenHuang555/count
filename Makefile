NAME=count
CC=gcc

compile = $(CC) $(shell ls *.c) -o $1 $2

all:
	$(call compile, $(NAME))
debug:
	$(call compile, $(NAME)-dbg, -g)
clean:
	rm -rf $(NAME)

