#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	if (!ft_isascii((char)c))
		return (NULL);
	i = ft_strlen(str);
	while (str[i] != (char)c && i > 0)
		i--;
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}
