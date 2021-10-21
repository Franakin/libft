#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pointer;

	if (!n || dest == src)
		return (dest);
	pointer = (unsigned char *)dest;
	while (n--)
		*pointer++ = *((unsigned char *)src++);
	return (dest);
}
