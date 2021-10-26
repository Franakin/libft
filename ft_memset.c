#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*pointer;

	pointer = str;
	while (n > 0)
	{
		*pointer = c;
		pointer++;
		n--;
	}
	return (str);
}
