#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	ret;

	ret = ft_strlen(src);
	if (dstsize == 0)
		return (ret);
	while (*src && dstsize - 1 > 0)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = 0;
	return (ret);
}
