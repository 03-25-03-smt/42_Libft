#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
  unsigned char *dest_ptr;
  const unsigned char *src_ptr;

  if (!dest && !src)
		return (NULL);
  dest_ptr = dest;
  src_ptr = src;
  if (dest_ptr < src_ptr)
  {
    while(n > 0)
      {
        *dest_ptr = *src_ptr;
        dest_ptr++;
        src_ptr++;
        n--;
      }
  }
  else
  {
      src_ptr += n;
      dest_ptr += n;
      while(n > 0)
      {
        src_ptr--;
        dest_ptr--;
        *dest_ptr = *src_ptr;
        n--;
      }
  }
  return (dest);
}
