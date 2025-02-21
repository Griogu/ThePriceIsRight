CC = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98

OBJS = $(SRCS:.cpp=.o)

NAME = ThePriceIsRight

SRCS = main.cpp \
	   The_Price_Is_Right.cpp

all: $(NAME) run

$(NAME): $(OBJS)
	@$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	@$(CC) $(CPPFLAGS) -c -o $@ $<

run:
	@./ThePriceIsRight

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
