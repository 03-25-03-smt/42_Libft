#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t  dst_len;
  size_t  src_len;
  size_t  i;
  size_t	original_dst_len;

  i = 0;
  dst_len = ft_strlen(dst);
  src_len = ft_strlen(src);
  original_dst_len = dst_len;
  if (dstsize == 0)
    return (src_len);
  if (dst_len >= dstsize)
    return (src_len + dstsize);
  while (src[i] != '\0' && dst_len < dstsize - 1)
    {
      dst[dst_len] = src[i];
       i++;
      dst_len++;
    }
  dst[dst_len] = '\0';
  return (original_dst_len + src_len);
}
