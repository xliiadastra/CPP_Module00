NAME		= phonebook

CC		= c++
CFLAGS		= -g -Wall -Wextra -Werror -std=c++98

RM		= rm
RMFLAGS		= -f

INCLUDE		= ./PhoneBook.hpp	\
		  ./Contact.hpp		

SRCS 		= PhoneBook.cpp \
			  Contact.cpp	\
			  main.cpp

OBJS		= $(SRCS:%.cpp=%.o)

all		: $(NAME)

$(NAME)		: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean		:
		$(RM) $(RMFLAGS) $(OBJS)

fclean		: clean
		$(RM) $(RMFLAGS) $(NAME)

re		: fclean all

.PHONY		: all clean fclean re
