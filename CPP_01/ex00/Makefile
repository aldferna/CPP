NAME = zombie

CC = c++
CFLAGS =  -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp \
	  newZombie.cpp \
	  randomChump.cpp \
	  main.cpp \

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
