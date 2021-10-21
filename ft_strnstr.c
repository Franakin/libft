#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	k;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && len > 0)
	{
		k = 0;
		while (haystack[k + i] == needle[k] && len > 0)
		{
			k++;
			len--;
			if (needle[k] == 0)
				return ((char *)&haystack[i]);
		}
		i++;
		len--;
	}
	return (NULL);
}
