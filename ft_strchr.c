#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!ft_isascii((char)c))
		return (NULL);
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (!*str && !(char)c)
		return ((char *)str);
	return (NULL);
}
