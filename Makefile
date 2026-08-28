NAME = libft.a                     // name of file output 

SRC =   ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_touper.c  \
        ft_tolower.c \
        ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memmove.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strlen.c \
        ft_strlcpy.c \ 
        ft_strlcat.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strcmp.c \
        ft_strnstr.c \
        ft_atoi.c \ 
        ft_calloc.c \
        ft_strdup.c \ 



OBJS = $(SRC:.c=.o)                 // auto changing .c to .o (one object per file)

CC = cc 
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f                         // delete even if file not exist
AR = ar crs                        // to create .a 

%.o: %.c                           // pattern : that for .o we need .c file and once foumd .c we are compiling and receivimg .o
    $(CC)  $(CFLAGS)  -c  $<  -o  $@

$(NAME):  $(OBJS)                  // for libft.a we need OBJS , once true we are creating .a , libft.a , ft_isalpha.o
          $(AR)  $(NAME)  $(OBJS)

all:  $(NAME)                        // creatin library by default, when "make"

clean:                               // deleting middle stage .o files 
      $(RM)  $(OBJS)

fclean:  clean                        // deleting libft.a file
          $(RM)  $(NAME)

re:  fclean  all                       // recreating library from scratch

.PHONY:  all fclean  re                // already explained in notebook
