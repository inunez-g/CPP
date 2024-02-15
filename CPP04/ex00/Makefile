NAME = ex00

SRC = main.cpp \
	  Animal.cpp \
	  Cat.cpp \
	  Dog.cpp \
	  WrongAnimal.cpp \
	  WrongCat.cpp \

OBJ = $(SRC:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(NAME)
	@echo "\033[92mex00 has been successfully compiled!\033[0m"

$.o: %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re