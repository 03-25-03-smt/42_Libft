#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
  const unsigned char  *str_ptr;
  unsigned char  *dest_ptr;

  str_ptr = src;
  dest_ptr = dest;
  while(n > 0)
    {
      *dest_ptr = *str_ptr;
      dest_ptr++;
      str_ptr++;
      n--;
    }
    return (dest);
}
  
