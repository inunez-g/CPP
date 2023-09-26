NAME = ex01

SRC = main.cpp \
	  Animal.cpp \
	  Cat.cpp \
	  Dog.cpp \
	  WrongAnimal.cpp \
	  WrongCat.cpp \
	  Brain.cpp \

OBJ = $(SRC:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(NAME)
	@echo "\033[92mex01 has been successfully compiled!\033[0m"

$.o: %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re