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

all: libft | $(NAME)

$(NAME): ./Libft/libft.a $(OBJS)
	@$(COMPILE) $(ARCHIVE) $(OBJS) -o $(NAME)
	@echo "Creating executable"

clean:
	@rm -rf $(OBJS)
	@echo "Removing object files"
	@$(MAKE) clean -C ./Libft

fclean: clean
	@rm -f $(NAME)
	@echo "Removing executable file"
	@$(MAKE) fclean -C ./Libft/

libft:
	@$(MAKE) bonus -C ./Libft/

re: fclean | all

.PHONY: all clean fclean libft re