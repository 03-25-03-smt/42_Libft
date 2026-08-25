#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t  i;
  size_t  len;

  i = 0;
  len  = 0;
  while (src[len] != '\0')
    len++;
  if (dstsize > 0)
  {
     while (i < (dstsize - 1) && i < len)
      {
        dst[i] = src[i];
        i++;
      }
  }
  else
    return (len);
  dst[i] = '\0';
  return (len);
}
