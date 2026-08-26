#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
  char  *res;

  res = NULL;
  while (*s != '\0')
    {
     if (*(unsigned char *)s == (unsigned char)c)
       res = (char *)s;
     s++;     
    }
  if (*(unsigned char *)s == '\0' && (unsigned char)c == '\0')
    res = (char *)s;
  return (res);
}
