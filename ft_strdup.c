#include "libft.h"

char	*ft_strdup(const char *s)
{
  size_t  len;
  char  *c;

  len = ft_strlen(s);
  c = malloc(len + 1);
  if (!c)
    return (NULL);
  ft_memcpy(c,s,len);
  c[len] = '\0';
  return (c);
}

  
  
