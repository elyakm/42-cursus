NAME = libft

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar rcs

SRCS_PATH = src/

SRCS_FILES		= ft_isalpha.c ft_strlen.c

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

.PHONY:		all bonus clean fclean re