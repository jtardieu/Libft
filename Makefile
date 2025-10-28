NAME = libft.a

CC = cc
CFLAG = -Wall -Wextra -Werror

SRC =	ft_strlcat.c \
		ft_strlcpy.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strchr.c

OBJ = $(SRC:.c = .o)

all : $(NAME)

$(NAME) : $(OBJ)

	ar -rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all