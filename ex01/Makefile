NAME = phone

CC = c++

CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address -std=c++98

SRCS = PhoneBook.cpp Contact.cpp main.cpp

OBJ = $(SRCS:.cpp=.o)

AR = ar rcs

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re: fclean all
