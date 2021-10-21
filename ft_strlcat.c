#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	total;
	size_t	dstsizecpy;

	dstsizecpy = dstsize;
	total = ft_strlen(dst) + ft_strlen(src);
	while (*dst && dstsize > 0)
	{
		dstsize--;
		dst++;
	}
	if (dstsize == 0)
		return (ft_strlen(src) + dstsizecpy);
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = 0;
	return (total);
}
