# Nom de la bibliothèque
NAME = libft.a

# Liste des fichiers source
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
		ft_strdup.c

# Liste des fichiers objets
OBJS = $(SRCS:.c=.o)

# Options de compilation
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Cible par défaut : créer la bibliothèque
all: $(NAME)

# Crée la bibliothèque (archive) à partir des fichiers objets
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compile chaque fichier source en fichier objet
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Supprime les fichiers objets
clean:
	rm -f $(OBJS)

# Supprime les fichiers objets et la bibliothèque
fclean: clean
	rm -f $(NAME)

# Reconstruit tout à partir de zéro
re: fclean all