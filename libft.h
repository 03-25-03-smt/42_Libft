#ifndef  LIBFT_H
#define  LIBFT_H

#include <unistd.h>  //write
#include <stdlib.h>  // malloc, free
#include <stddef.h>  // size_t, NULL 

typedef struct  s_list
{
  void            *content;                  
  struct  s_list  *next;    // в нутри структуры мы используем уже известное имя тк. С еще не знает что такое  t_list
}                 t_list;  // он появиться только тут

int		ft_isalpha(int c);

#endif

