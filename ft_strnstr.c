#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && len > i)
	{
		k = 0;
		while (haystack[k + i] == needle[k] && len > (k + i))
		{
			k++;
			if (needle[k] == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
