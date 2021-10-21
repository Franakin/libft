#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;

	str = (const char *)s;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		n--;
		if (*str == (char)c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
