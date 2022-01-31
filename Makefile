NAME = pipex

CC = gcc
CFLAGS = -Wall -Wextra -Werror
COMPILE = $(CC) $(CFLAGS)
ARCHIVE = ./Libft/libft.a

FILES =	pipex.c\
		parsing.c\
		split_test.c\
		substr_cmd.c

OBJS = $(FILES:.c=.o)

%.o : %.c pipex.h
	@$(CC) $(CFLAGS) -c $<

all: $(NAME)

$(NAME): $(ARCHIVE) $(OBJS)
	$(COMPILE) $(ARCHIVE) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
	@echo "Removing object files"
	@$(MAKE) clean -C ./Libft

fclean: clean
	@rm -f $(NAME)
	@echo "Removing executable file"
	@$(MAKE) fclean -C ./Libft/

$(ARCHIVE):
	@$(MAKE) bonus -C ./Libft/

re: fclean | all

.PHONY: all clean fclean libft re