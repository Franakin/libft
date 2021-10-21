#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0 && *str)
	{
		if (*str == ch)
			return (str);
		n--;
		str++;
	}
	if (*str == 0 && ch == 0)
		return (str);
	return (NULL);
}
