#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*point2dest;
	unsigned char	*point2src;

	point2dest = (unsigned char *)dest;
	point2src = (unsigned char *)src;
	if (!n || dest == src)
		return (dest);
	if (point2dest > point2src)
		while (n--)
			point2dest[n] = point2src[n];
	else
		while (n--)
			*point2dest++ = *point2src++;
	return (dest);
}
