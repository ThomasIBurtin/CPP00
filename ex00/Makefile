CC = g++
CFLAGS = -Werror -Wall -Wextra
SRC = megaphone.cpp
OBJ = $(SRC:.c=.o)
NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all