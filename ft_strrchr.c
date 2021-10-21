#include <stdio.h>
#include <string.h>
size_t	ft_strlen(const char *str);
int		ft_isascii(int c);

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	if (!ft_isascii(c))
		return (NULL);
	i = ft_strlen(str);
	while (str[i] != c && i > 0)
		i--;
	if (str[i] == c)
		return ((char *)&str[i]);
	return (NULL);
}
