#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t  s_len;
  char  *sub;


  if (!s)
    return (NULL);
  s_len = ft_strlen(s);
  if (s_len < start)
  { 
    sub = (char *)malloc(sizeof(char) * 1);
    if (!sub)
      return (NULL);
    sub[0] = '\0';
    return (sub);
  }
  if (len > s_len - start)
    len = s_len - start;
  sub = malloc(len + 1);
  if (!sub)
    return (NULL);
  ft_memcpy(sub, s + start, len);
  sub[len] = '\0';
  return (sub);
}
