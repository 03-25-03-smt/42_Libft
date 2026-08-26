#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (small[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] != '\0'&& big[i + j] == small[j])
			j++;
		if (small[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
