#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
   const unsigned char *str;

  str = s;
  while (n > 0)
  {
      if (*str == (unsigned char)c)         // сравниваем байт со значением с + приравниваем с к unsigned char
        return (void *)str;
      str++;
      n--;
  }
  return (NULL);
}
