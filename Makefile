NAME = libft.a

SRC =   ft_isalpha.c  

OBJS = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f
AR = ar crs

%.o: %.c
    $(CC)  $(CFLAGS)  -c  $<  -o  $@

$(NAME):  $(OBJS)
          $(AR)  $(NAME)  $(OBJS)

all:  $(NAME)

clean:
      $(RM)  $(OBJS)

fclean:  clean
          $(RM)  $(NAME)

re:  fclean  all

.PHONY:  all fclean  re
