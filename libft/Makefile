NAME = libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar rcs

SRCS_PATH = src/

VAR			= $(SRCS_PATH)ft_tolower.c $(SRCS_PATH)main.c

SRCS_FILES		= ft_isalpha.c ft_strlen.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c

SRCS = $(addprefix $(SRCS_PATH), $(SRCS_FILES))
OBJS		= $(SRCS:.c=.o)


$(NAME):	$(OBJS)
			-@$(AR) $(NAME) $(OBJS)

all:		$(NAME)

clean:
		-@$(RM) $(OBJS) 

fclean:		clean
		-@$(RM) $(NAME)

re:			fclean all

compile: 
		$(CC) $(CFLAGS) $(VAR)


.PHONY:		all bonus clean fclean re