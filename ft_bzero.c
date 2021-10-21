#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*pointer;

	pointer = str;
	while (n--)
	{
		*pointer = 0;
		pointer++;
	}
}
