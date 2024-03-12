NAME = ex02

SRC = main.cpp \
	Bureaucrat.cpp \
	AForm.cpp \
	ShrubberyCreationForm.cpp \
	RobotomyRequestForm.cpp \
	PresidentialPardonForm.cpp


OBJ = $(SRC:.cpp=.o)

INC = -I.

CC = clang++

FLAGS = -std=c++98 -Werror -Wextra -Wall -O2 #-g3 -fsanitize=address

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(INC) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAGS) $(INC) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

phony: all re clean fclean
