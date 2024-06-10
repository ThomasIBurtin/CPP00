CC = g++
CFLAGS = -Werror -Wall -Wextra
SRC = Contact.cpp \
	  PhoneBook.cpp \
	  main.cpp
OBJ = $(SRC:.c=.o)
NAME = phonebook

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