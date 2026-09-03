NAME = libft.a                     // name of file output 

SRC =   ft_isalpha \
	ft_isdigit \
	ft_isalnum \
	ft_isascii \
	ft_isprint \
	ft_strlen \
	ft_memset \
	ft_bzero \
	ft_memcpy \
	ft_memmove \
	ft_strlcpy \
	ft_strlcat \
	ft_toupper \
	ft_tolower \
	ft_strchr \
	ft_strrchr \
	ft_strncmp \
	ft_memchr \
	ft_memcmp \
	ft_strnstr \
	ft_atoi \
	ft_calloc \
	ft_strdup \
	ft_substr \
	ft_strjoin \
	ft_strtrim \
	ft_split \
	ft_itoa \
	ft_strmapi \
	ft_striteri \
	ft_putchar_fd \
	ft_putstr_fd \
	ft_putendl_fd \
	ft_putnbr_fd \
        ft_lstnew \
	ft_lstadd_front \
	ft_lstsize \
	ft_lstlast \
	ft_lstadd_back \
	ft_lstdelone \
	ft_lstclear \
	ft_lstiter \
	ft_lstmap  

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
