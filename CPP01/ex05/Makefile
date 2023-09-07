NAME = ex05

SRC = main.cpp \
	  Harl.cpp \

OBJ = $(SRC:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $(NAME)
	@echo "\033[92mex05 has been successfully compiled!\033[0m"

$.o: %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re