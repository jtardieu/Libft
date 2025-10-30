NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SOURCE =	ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strdup.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_calloc.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_strnstr.c \
			ft_strchr.c

PART2  =  	ft_substr.c \
			ft_strtrim.c \
			ft_strjoin.c \
			ft_split.c

OBJ = $(SOURCE:.c=.o) $(PART2:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re