NAME = Weapon

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Weapon.cpp

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
